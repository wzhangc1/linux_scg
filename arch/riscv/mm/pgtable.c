// SPDX-License-Identifier: GPL-2.0

#include <asm/pgalloc.h>
#include <linux/gfp.h>
#include <linux/kernel.h>
#include <linux/pgtable.h>

#ifdef CONFIG_HAVE_ARCH_HUGE_VMAP
int p4d_set_huge(p4d_t *p4d, phys_addr_t addr, pgprot_t prot)
{
	return 0;
}

void p4d_clear_huge(p4d_t *p4d)
{
}

int pud_set_huge(pud_t *pud, phys_addr_t phys, pgprot_t prot)
{
	pud_t new_pud = pfn_pud(__phys_to_pfn(phys), prot);

	set_pud(pud, new_pud);
	return 1;
}

int pud_clear_huge(pud_t *pud)
{
	if (!pud_leaf(READ_ONCE(*pud)))
		return 0;
	pud_clear(pud);
	return 1;
}

int pud_free_pmd_page(pud_t *pud, unsigned long addr)
{
	pmd_t *pmd = pud_pgtable(*pud);
	int i;

	pud_clear(pud);

	flush_tlb_kernel_range(addr, addr + PUD_SIZE);

	for (i = 0; i < PTRS_PER_PMD; i++) {
		if (!pmd_none(pmd[i])) {
			pte_t *pte = (pte_t *)pmd_page_vaddr(pmd[i]);

			pte_free_kernel(NULL, pte);
		}
	}

	pmd_free(NULL, pmd);

	return 1;
}

int pmd_set_huge(pmd_t *pmd, phys_addr_t phys, pgprot_t prot)
{
	pmd_t new_pmd = pfn_pmd(__phys_to_pfn(phys), prot);

	set_pmd(pmd, new_pmd);
	return 1;
}

int pmd_clear_huge(pmd_t *pmd)
{
	if (!pmd_leaf(READ_ONCE(*pmd)))
		return 0;
	pmd_clear(pmd);
	return 1;
}

int pmd_free_pte_page(pmd_t *pmd, unsigned long addr)
{
	pte_t *pte = (pte_t *)pmd_page_vaddr(*pmd);

	pmd_clear(pmd);

	flush_tlb_kernel_range(addr, addr + PMD_SIZE);
	pte_free_kernel(NULL, pte);
	return 1;
}

#endif /* CONFIG_HAVE_ARCH_HUGE_VMAP */
