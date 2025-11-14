/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testerino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:26:18 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/14 15:49:02 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"
#include <assert.h>

int main(void)
{
	int i;
	int *p;
	i = 23;
	p = &i;

//Test %c
	int r1 = printf("OF c:%c\n", 't');
	int r2 = ft_printf("MF c:%c\n", 't');
	printf("Result original = %d, result diy = %d\n", r1, r2); 
	assert(r1 == r2);
//Test %s
	r1 = printf("OF s:%s\n", "Schnitzel");
	r2 = ft_printf("MF s:%s\n", "Schnitzel");
	assert(r2 == r1);
//Test %p
	r1 = printf("OF p:%p\n", p);
	r2 = ft_printf("MF p:%p\n", p);
	assert(r1 == r2);
//Test %d
	r1 = printf("OF d:%d\n", -4242);
	r2 = ft_printf("MF d:%d\n", -4242);
	assert(r1 == r2);
//Test %i
	r1 = printf("OF i:%i\n", 1992);
	r2 = ft_printf("MF i:%i\n", 1992);
	assert(r1 == r2);
//Test %u
	r1 = printf("OF u:%u\n", 12345);
	r2 = ft_printf("MF u:%u\n", 12345);
	assert(r1 == r2);
//Test %x
	r1 = printf("OF x:%x\n", 456);
	r2 = ft_printf("MF x:%x\n", 456);
	assert(r1 == r2);
//Test %X
	r1 = printf("OF X:%X\n", 9876);
	r2 = ft_printf("MF X:%X\n", 9876);
	assert(r1 == r2);
//Test %%
	r1 = printf("OF percent:%%\n");
	r2 = ft_printf("MF percent:%%\n");
	assert(r1 == r2);
//Test % illegal format specifier
	r1 = printf("\nOF wrong: %o");
	r2 = ft_printf("\nMF wrong: %o");
	printf("Result original = %d, result diy = %d\n", r1, r2);
	//assert(r1 == r2);
//Test NULL
	r1 = printf(" NULL %s NULL ", NULL);
	printf("\n");
	r2 = ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	printf("Result original = %d, result diy = %d\n", r1, r2);
}
