/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmathie <anmathie@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 01:24:46 by anmathie          #+#    #+#             */
/*   Updated: 2025/07/28 01:26:11 by anmathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H
# pragma once   
//Color Reset
#define CREST "\x1B[0m"

//Normal text
#define NBLK "\x1B[0;30m"
#define NRED "\x1B[0;31m"
#define NGRN "\x1B[0;32m"
#define NYEL "\x1B[0;33m"
#define NBLU "\x1B[0;34m"
#define NMAG "\x1B[0;35m"
#define NCYN "\x1B[0;36m"
#define NWHT "\x1B[0;37m"

//High intensity text
#define HNBLK "\x1B[0;90m"
#define HNRED "\x1B[0;91m"
#define HNGRN "\x1B[0;92m"
#define HNYEL "\x1B[0;93m"
#define HNBLU "\x1B[0;94m"
#define HNMAG "\x1B[0;95m"
#define HNCYN "\x1B[0;96m"
#define HNWHT "\x1B[0;97m"

//Bold text
#define BBLK "\x1B[1;30m"
#define BRED "\x1B[1;31m"
#define BGRN "\x1B[1;32m"
#define BYEL "\x1B[1;33m"
#define BBLU "\x1B[1;34m"
#define BMAG "\x1B[1;35m"
#define BCYN "\x1B[1;36m"
#define BWHT "\x1B[1;37m"

//High intensity Bold text
#define HBBLK "\x1B[1;90m"
#define HBRED "\x1B[1;91m"
#define HBGRN "\x1B[1;92m"
#define HBYEL "\x1B[1;93m"
#define HBBLU "\x1B[1;94m"
#define HBMAG "\x1B[1;95m"
#define HBCYN "\x1B[1;96m"
#define HBWHT "\x1B[1;97m"

//Faint text
#define FBLK "\x1B[2;30m"
#define FRED "\x1B[2;31m"
#define FGRN "\x1B[2;32m"
#define FYEL "\x1B[2;33m"
#define FBLU "\x1B[2;34m"
#define FMAG "\x1B[2;35m"
#define FCYN "\x1B[2;36m"
#define FWHT "\x1B[2;37m"

//High intensity Faint text
#define HFBLK "\x1B[2;90m"
#define HFRED "\x1B[2;91m"
#define HFGRN "\x1B[2;92m"
#define HFYEL "\x1B[2;93m"
#define HFBLU "\x1B[2;94m"
#define HFMAG "\x1B[2;95m"
#define HFCYN "\x1B[2;96m"
#define HFWHT "\x1B[2;97m"

//Italic text
#define IBLK "\x1B[3;30m"
#define IRED "\x1B[3;31m"
#define IGRN "\x1B[3;32m"
#define IYEL "\x1B[3;33m"
#define IBLU "\x1B[3;34m"
#define IMAG "\x1B[3;35m"
#define ICYN "\x1B[3;36m"
#define IWHT "\x1B[3;37m"

//High intensity Italic text
#define HIBLK "\x1B[3;90m"
#define HIRED "\x1B[3;91m"
#define HIGRN "\x1B[3;92m"
#define HIYEL "\x1B[3;93m"
#define HIBLU "\x1B[3;94m"
#define HIMAG "\x1B[3;95m"
#define HICYN "\x1B[3;96m"
#define HIWHT "\x1B[3;97m"

//Underline text
#define UBLK "\x1B[4;30m"
#define URED "\x1B[4;31m"
#define UGRN "\x1B[4;32m"
#define UYEL "\x1B[4;33m"
#define UBLU "\x1B[4;34m"
#define UMAG "\x1B[4;35m"
#define UCYN "\x1B[4;36m"
#define UWHT "\x1B[4;37m"

//High intensity Underline text
#define HUBLK "\x1B[4;90m"
#define HURED "\x1B[4;91m"
#define HUGRN "\x1B[4;92m"
#define HUYEL "\x1B[4;93m"
#define HUBLU "\x1B[4;94m"
#define HUMAG "\x1B[4;95m"
#define HUCYN "\x1B[4;96m"
#define HUWHT "\x1B[4;97m"

//Slow Blink text
#define LBLK "\x1B[5;30m"
#define LRED "\x1B[5;31m"
#define LGRN "\x1B[5;32m"
#define LYEL "\x1B[5;33m"
#define LBLU "\x1B[5;34m"
#define LMAG "\x1B[5;35m"
#define LCYN "\x1B[5;36m"
#define LWHT "\x1B[5;37m"

//High intensity Slow Blink text
#define HLBLK "\x1B[5;90m"
#define HLRED "\x1B[5;91m"
#define HLGRN "\x1B[5;92m"
#define HLYEL "\x1B[5;93m"
#define HLBLU "\x1B[5;94m"
#define HLMAG "\x1B[5;95m"
#define HLCYN "\x1B[5;96m"
#define HLWHT "\x1B[5;97m"

//Fast Blink text
#define QBLK "\x1B[6;30m"
#define QRED "\x1B[6;31m"
#define QGRN "\x1B[6;32m"
#define QYEL "\x1B[6;33m"
#define QBLU "\x1B[6;34m"
#define QMAG "\x1B[6;35m"
#define QCYN "\x1B[6;36m"
#define QWHT "\x1B[6;37m"

//High intensity Fast Blink text
#define HQBLK "\x1B[6;90m"
#define HQRED "\x1B[6;91m"
#define HQGRN "\x1B[6;92m"
#define HQYEL "\x1B[6;93m"
#define HQBLU "\x1B[6;94m"
#define HQMAG "\x1B[6;95m"
#define HQCYN "\x1B[6;96m"
#define HQWHT "\x1B[6;97m"

//Reverse text
#define RBLK "\x1B[7;30m"
#define RRED "\x1B[7;31m"
#define RGRN "\x1B[7;32m"
#define RYEL "\x1B[7;33m"
#define RBLU "\x1B[7;34m"
#define RMAG "\x1B[7;35m"
#define RCYN "\x1B[7;36m"
#define RWHT "\x1B[7;37m"

//High intensity Reverse text
#define HRBLK "\x1B[7;90m"
#define HRRED "\x1B[7;91m"
#define HRGRN "\x1B[7;92m"
#define HRYEL "\x1B[7;93m"
#define HRBLU "\x1B[7;94m"
#define HRMAG "\x1B[7;95m"
#define HRCYN "\x1B[7;96m"
#define HRWHT "\x1B[7;97m"

//Strike-through text
#define SBLK "\x1B[9;30m"
#define SRED "\x1B[9;31m"
#define SGRN "\x1B[9;32m"
#define SYEL "\x1B[9;33m"
#define SBLU "\x1B[9;34m"
#define SMAG "\x1B[9;35m"
#define SCYN "\x1B[9;36m"
#define SWHT "\x1B[9;37m"

//High intensity Strike-through text
#define HSBLK "\x1B[9;90m"
#define HSRED "\x1B[9;91m"
#define HSGRN "\x1B[9;92m"
#define HSYEL "\x1B[9;93m"
#define HSBLU "\x1B[9;94m"
#define HSMAG "\x1B[9;95m"
#define HSCYN "\x1B[9;96m"
#define HSWHT "\x1B[9;97m"


//Regular background
#define NBLKB "\x1B[0;40m"
#define NREDB "\x1B[0;41m"
#define NGRNB "\x1B[0;42m"
#define NYELB "\x1B[0;43m"
#define NBLUB "\x1B[0;44m"
#define NMAGB "\x1B[0;45m"
#define NCYNB "\x1B[0;46m"
#define NWHTB "\x1B[0;47m"

//High intensity background 
#define HBLKB "\x1B[0;100m"
#define HREDB "\x1B[0;101m"
#define HGRNB "\x1B[0;102m"
#define HYELB "\x1B[0;103m"
#define HBLUB "\x1B[0;104m"
#define HMAGB "\x1B[0;105m"
#define HCYNB "\x1B[0;106m"
#define HWHTB "\x1B[0;107m"

#endif