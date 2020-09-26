/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:10:05 by hexa              #+#    #+#             */
/*   Updated: 2020/09/25 19:32:12 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Warlock.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  const Dummy bob;
//  const Fwoosh* fwoosh = new Fwoosh();

  const Fwoosh toto("toto", "ata");

/*  richard.learnSpell(&toto);

  richard.introduce();
  richard.launchSpell("toto", bob);

  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);*/
}
