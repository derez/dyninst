#ifndef DYNINST_AARCH32_SYS_REGS_H
#define DYNINST_AARCH32_SYS_REGS_H

DEF_REGISTER(ats12nsopw, 0 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_fiq, 1 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmswinc, 2 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdevid, 3 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_pfr1, 4 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hdcr, 5 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_hsre, 6 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdscrext, 7 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hadfsr, 8 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_lrn, 9 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ccsidr, 10 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgbxvrn, 11 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiipas2, 12 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icialluis, 13 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats12nsopr, 14 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdtrrxint, 15 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(itlbiasid, 16 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(contextidr, 17 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(sder, 18 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(httbr, 19 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mvfr1, 20 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dspsr, 21 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hsctlr, 22 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(nsacr, 23 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1hw, 24 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_mmfr4, 25 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(actlr2, 26 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1hr, 27 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntp_ctl, 28 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvalhis, 29 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdevid1, 30 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiallnsnh, 31 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdevid2, 32 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdrar, 33 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdidr, 34 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgoslsr, 35 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiallis, 36 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cpacr, 37 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_dir, 38 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgprcr, 39 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_abt, 40 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dtlbiall, 41 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmccfiltr, 42 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cnthp_cval, 43 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvaal, 44 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(prrr, 45 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(haifsr, 46 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dtlbimva, 47 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_ap1rn, 48 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmceid2, 49 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgwvrn, 50 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ttbcr, 51 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntv_ctl, 52 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdtrrxext, 53 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgvcr, 54 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_misr, 55 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmovsset, 56 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgwcrn, 57 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(vmpidr, 58 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hstr, 59 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dcimvac, 60 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_ctlr, 61 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cp15dmb, 62 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hdfar, 63 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_iar1, 64 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(sdcr, 65 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ttbcr2, 66 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmevtypern, 67 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiallh, 68 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mpidr, 69 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_hppir1, 70 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgclaimset, 71 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntp_cval, 72 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar5, 73 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvalis, 74 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hcptr, 75 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_mmfr3, 76 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_ap1rn, 77 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(vttbr, 78 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hpfar, 79 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntpct, 80 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cur, 81 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_ap0rn, 82 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_pmr, 83 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(clidr, 84 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_igrpen1, 85 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_eoir1, 86 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_hppir1, 87 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(rmr, 88 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_bpr0, 89 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hactlr2, 90 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(vbar, 91 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvaa, 92 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvalh, 93 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmceid1, 94 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_bpr0, 95 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(itlbiall, 96 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmintenset, 97 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(fpexc, 98 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(isr, 99 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tpidruro, 100 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_msre, 101 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(nmrr, 102 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dccimvac, 103 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_mmfr2, 104 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hmair0, 105 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiallhis, 106 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(jidr, 107 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdsar, 108 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_und, 109 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_rpr, 110 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hamair1, 111 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdtrtxint, 112 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmcr, 113 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvaais, 114 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(amair1, 115 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiipas2l, 116 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_eoir0, 117 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cnthp_tval, 118 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntvct, 119 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(jmcr, 120 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmcntenset, 121 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cprp, 122 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(joscr, 123 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(htpidr, 124 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar0, 125 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tpidrurw, 126 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_mctlr, 127 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvah, 128 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(bpimva, 129 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbtr, 130 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_igrpen0, 131 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimval, 132 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ifar, 133 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_bpr1, 134 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_sgi0r, 135 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiall, 136 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_mmfr1, 137 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cpr, 138 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats12nsouw, 139 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cpwp, 140 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiipas2is, 141 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dacr, 142 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar4, 143 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_vmcr, 144 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hsr, 145 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_iar0, 146 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_sgi1r, 147 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dccmvac, 148 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgwfar, 149 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(elr_hyp, 150 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tpidrprw, 151 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dfar, 152 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dlr, 153 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_svc, 154 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(scr, 155 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(sctlr, 156 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cpw, 157 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmevcntrn, 158 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvais, 159 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmccntr, 160 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dccmvau, 161 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(midr, 162 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgoseccr, 163 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgclaimclr, 164 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_ctlr, 165 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_eoir1, 166 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_pfr0, 167 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_hppir0, 168 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_mmfr0, 169 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dfsr, 170 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_mgrpen1, 171 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(bpiall, 172 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tcmtr, 173 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmceid0, 174 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar2, 175 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar3, 176 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntkctl, 177 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_hyp, 178 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_afr0, 179 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mair1, 180 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hvbar, 181 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_vtr, 182 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ctr, 183 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntv_tval, 184 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hcr, 185 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_hppir0, 186 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_irq, 187 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ttbr1, 188 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdtrtxext, 189 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(spsr_mon, 190 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icimvau, 191 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mair0, 192 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiipas2lis, 193 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hrmr, 194 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgosdlr, 195 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_ap0rn, 196 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(bpiallis, 197 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntfrq, 198 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_eoir0, 199 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgbvrn, 200 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmcntenclr, 201 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdscrint, 202 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dtlbiasid, 203 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvahis, 204 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_bpr1, 205 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_hcr, 206 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_dfr0, 207 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats1cuw, 208 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(rvbar, 209 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hactlr, 210 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(csselr, 211 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dccisw, 212 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgdccint, 213 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimvaalis, 214 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_elrsr, 215 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntv_cval, 216 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(fcseidr, 217 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mvfr0, 218 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_sre, 219 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgbcrn, 220 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(amair0, 221 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmuserenr, 222 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cp15isb, 223 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmxevcntr, 224 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cnthp_ctl, 225 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbimva, 226 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_rpr, 227 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cnthctl, 228 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_ap1rn, 229 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hcr2, 230 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(fpscr, 231 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_igrpen0, 232 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntp_tval, 233 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(actlr, 234 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hacr, 235 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmxevtyper, 236 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(itlbimva, 237 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ats12nsour, 238 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(revidr, 239 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_asgi1r, 240 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(id_isar1, 241 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmceid3, 242 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_dir, 243 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiasid, 244 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(vtcr, 245 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_iar1, 246 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icv_iar0, 247 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmselr, 248 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(iciallu, 249 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgauthstatus, 250 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hifar, 251 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmintenclr, 252 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(pmovsr, 253 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mvfr2, 254 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(mvbar, 255 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ttbr0, 256 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cntvoff, 257 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(aifsr, 258 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_igrpen1, 259 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hamair0, 260 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ifsr, 261 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiallnsnhis, 262 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_eisr, 263 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_lrcn, 264 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(ich_ap0rn, 265 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(adfsr, 266 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(vpidr, 267 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(fpsid, 268 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(icc_pmr, 269 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(cp15dsb, 270 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(tlbiasidis, 271 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dcisw, 272 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(aidr, 273 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(par, 274 | FULL |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(hmair1, 275 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dccsw, 276 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(dbgoslar, 277 | D_REG |SYSREG | Arch_aarch32, "aarch32");
DEF_REGISTER(htcr, 278 | D_REG |SYSREG | Arch_aarch32, "aarch32");

#endif //DYNINST_AARCH32_SYS_REGS_H
