#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// COLOR                    0   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float       
// TEXCOORD                 1   xyz         3     NONE   float   xyz 
// TEXCOORD                 2   xyz         4     NONE   float       
// TEXCOORD                 3   xyz         5     NONE   float       
// TEXCOORD                 4   xyzw        6     NONE   float       
// TEXCOORD                 5   xyz         7     NONE   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[171]
// Embedded Data:
//  0x000000ab - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x000000a6 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[5], immediateIndexed
dcl_constantbuffer CB1[21], immediateIndexed
dcl_input_ps linear v1.xyzw
dcl_input_ps linear v3.xyz
dcl_output o0.xyzw
dcl_temps 3
eq r0.x, v1.w, l(0.000000)
discard_nz r0.x
dp3 r0.x, v3.xyzx, v3.xyzx
rsq r0.x, r0.x
mul r0.xyz, r0.xxxx, v3.xyzx
dp3_sat r0.w, cb1[9].xyzx, r0.xyzx
mul r1.xyz, r0.wwww, cb1[1].xyzx
mul r1.xyz, r1.xyzx, v1.xyzx
mad r1.xyz, cb0[0].xyzx, cb1[0].xyzx, r1.xyzx
dp3_sat r0.w, cb1[10].xyzx, r0.xyzx
mul r2.xyz, r0.wwww, cb1[2].xyzx
mad r1.xyz, r2.xyzx, v1.xyzx, r1.xyzx
dp3_sat r0.w, cb1[11].xyzx, r0.xyzx
mul r2.xyz, r0.wwww, cb1[3].xyzx
mad r1.xyz, r2.xyzx, v1.xyzx, r1.xyzx
dp3_sat r0.x, cb1[12].xyzx, r0.xyzx
mul r0.xyz, r0.xxxx, cb1[4].xyzx
mad_sat o0.xyz, r0.xyzx, v1.xyzx, r1.xyzx
mov o0.w, v1.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[171], bundle is:[213] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneDGSLLambert_mainTk.pdb
// Shader Semantic Hash      : 0x856e4177202d3c
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask 15, param0, paramSlot1, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 3, channelMask  7, param1, paramSlot3, DefaultVal={0,0,0,0}

codeLenInByte        = 384 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 2;
;  extUserElements 1[0] = IMM_CONST_BUFFER 0, offset 0x0:3 dwords
;  extUserElements 1[1] = IMM_CONST_BUFFER 1, offset 0x4:7 dwords
NumVgprs             = 15;
NumSgprs             = 44;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000000
; constBufUsage           = 0x00000003

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000002
SPIC:NUM_INTERP             = 2
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000050
DB:Z_ORDER                  = 1
DB:KILL_ENABLE              = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x16C, dwords=0x5B)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v10, off, off, off done vm        // 000000000008: F8001801 0000000A
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v10, v11, off, off done vm        // 000000000008: F8001803 00000B0A
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v10, v2, off, off done vm         // 000000000008: F8001803 0000020A
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v10, v11                     // 000000000000: 5E00170A
  v_cvt_pkrtz_f16_f32  v1, v7, v2                       // 000000000004: 5E020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v10, v11                    // 000000000000: 5C00170A
  v_cvt_pknorm_u16_f32  v1, v7, v2                      // 000000000004: 5C020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v10, v11                    // 000000000000: 5A00170A
  v_cvt_pknorm_i16_f32  v1, v7, v2                      // 000000000004: 5A020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v10, v11                        // 000000000000: 6000170A
  v_cvt_pk_u16_u32  v1, v7, v2                          // 000000000004: 60020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v10, v11                        // 000000000000: 6200170A
  v_cvt_pk_i16_i32  v1, v7, v2                          // 000000000004: 62020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v10, v11, v7, v2 done vm          // 000000000008: F800180F 02070B0A
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[40:41], exec                          // 000000000000: BEA8047E
  s_load_dwordx8  s[4:11], s[0:1], 0x00                 // 000000000004: C0C20100
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  v_interp_p1_f32  v2, v0, attr0.w                      // 00000000000C: C8080300
  v_interp_p2_f32  v2, v1, attr0.w                      // 000000000010: C8090301
  v_cmp_eq_f32  vcc, 0, v2                              // 000000000014: 7C040480
  s_andn2_b64   s[40:41], s[40:41], vcc // wrscc        // 000000000018: 8AA86A28
  s_cbranch_scc0  label_005A                            // 00000000001C: BF840052
  s_and_b64     exec, exec, s[40:41] // wrscc           // 000000000020: 87FE287E
  v_interp_p1_f32  v3, v0, attr1.z                      // 000000000024: C80C0600
  v_interp_p1_f32  v4, v0, attr1.y                      // 000000000028: C8100500
  v_interp_p2_f32  v3, v1, attr1.z                      // 00000000002C: C80D0601
  s_waitcnt     lgkmcnt(0)                              // 000000000030: BF8C007F
  s_buffer_load_dwordx4  s[0:3], s[8:11], 0x24          // 000000000034: C2800924
  v_interp_p1_f32  v5, v0, attr1.x                      // 000000000038: C8140400
  v_interp_p2_f32  v4, v1, attr1.y                      // 00000000003C: C8110501
  v_mul_legacy_f32  v6, v3, v3                          // 000000000040: 0E0C0703
  v_interp_p2_f32  v5, v1, attr1.x                      // 000000000044: C8150401
  v_mac_f32     v6, v4, v4                              // 000000000048: 3E0C0904
  s_buffer_load_dwordx4  s[12:15], s[8:11], 0x28        // 00000000004C: C2860928
  v_mac_f32     v6, v5, v5                              // 000000000050: 3E0C0B05
  s_buffer_load_dwordx4  s[16:19], s[8:11], 0x04        // 000000000054: C2880904
  s_buffer_load_dwordx4  s[20:23], s[8:11], 0x2c        // 000000000058: C28A092C
  v_rsq_f32     v6, v6                                  // 00000000005C: 7E0C5D06
  s_buffer_load_dwordx4  s[24:27], s[8:11], 0x00        // 000000000060: C28C0900
  s_buffer_load_dwordx4  s[28:31], s[8:11], 0x30        // 000000000064: C28E0930
  v_mul_legacy_f32  v3, v3, v6                          // 000000000068: 0E060D03
  s_buffer_load_dwordx4  s[4:7], s[4:7], 0x00           // 00000000006C: C2820500
  s_buffer_load_dwordx4  s[32:35], s[8:11], 0x08        // 000000000070: C2900908
  v_mul_legacy_f32  v4, v4, v6                          // 000000000074: 0E080D04
  s_waitcnt     lgkmcnt(0)                              // 000000000078: BF8C007F
  v_mul_legacy_f32  v7, s2, v3                          // 00000000007C: 0E0E0602
  s_buffer_load_dwordx4  s[36:39], s[8:11], 0x0c        // 000000000080: C292090C
  v_mul_legacy_f32  v5, v5, v6                          // 000000000084: 0E0A0D05
  v_mac_f32     v7, s1, v4                              // 000000000088: 3E0E0801
  s_buffer_load_dwordx4  s[8:11], s[8:11], 0x10         // 00000000008C: C2840910
  v_mad_legacy_f32  v7, s0, v5, v7 clamp                // 000000000090: D2800807 041E0A00
  v_interp_p1_f32  v6, v0, attr0.x                      // 000000000098: C8180000
  v_interp_p1_f32  v8, v0, attr0.y                      // 00000000009C: C8200100
  v_interp_p1_f32  v0, v0, attr0.z                      // 0000000000A0: C8000200
  v_mul_legacy_f32  v9, s14, v3                         // 0000000000A4: 0E12060E
  v_mul_legacy_f32  v10, s16, v7                        // 0000000000A8: 0E140E10
  v_mul_legacy_f32  v11, s17, v7                        // 0000000000AC: 0E160E11
  v_mul_legacy_f32  v7, s18, v7                         // 0000000000B0: 0E0E0E12
  v_interp_p2_f32  v6, v1, attr0.x                      // 0000000000B4: C8190001
  v_interp_p2_f32  v8, v1, attr0.y                      // 0000000000B8: C8210101
  v_interp_p2_f32  v0, v1, attr0.z                      // 0000000000BC: C8010201
  v_mac_f32     v9, s13, v4                             // 0000000000C0: 3E12080D
  v_mul_legacy_f32  v1, s22, v3                         // 0000000000C4: 0E020616
  v_mul_legacy_f32  v10, v10, v6                        // 0000000000C8: 0E140D0A
  v_mul_legacy_f32  v11, v11, v8                        // 0000000000CC: 0E16110B
  v_mul_legacy_f32  v7, v7, v0                          // 0000000000D0: 0E0E0107
  v_mov_b32     v12, s24                                // 0000000000D4: 7E180218
  v_mov_b32     v13, s25                                // 0000000000D8: 7E1A0219
  v_mov_b32     v14, s26                                // 0000000000DC: 7E1C021A
  v_mad_legacy_f32  v9, s12, v5, v9 clamp               // 0000000000E0: D2800809 04260A0C
  v_mac_f32     v1, s21, v4                             // 0000000000E8: 3E020815
  v_mul_legacy_f32  v3, s30, v3                         // 0000000000EC: 0E06061E
  v_mac_f32     v10, s4, v12                            // 0000000000F0: 3E141804
  v_mac_f32     v11, s5, v13                            // 0000000000F4: 3E161A05
  v_mac_f32     v7, s6, v14                             // 0000000000F8: 3E0E1C06
  v_mul_legacy_f32  v12, s32, v9                        // 0000000000FC: 0E181220
  v_mul_legacy_f32  v13, s33, v9                        // 000000000100: 0E1A1221
  v_mul_legacy_f32  v9, s34, v9                         // 000000000104: 0E121222
  v_mad_legacy_f32  v1, s20, v5, v1 clamp               // 000000000108: D2800801 04060A14
  v_mac_f32     v3, s29, v4                             // 000000000110: 3E06081D
  v_mac_f32     v10, v12, v6                            // 000000000114: 3E140D0C
  v_mac_f32     v11, v13, v8                            // 000000000118: 3E16110D
  v_mac_f32     v7, v9, v0                              // 00000000011C: 3E0E0109
  s_waitcnt     lgkmcnt(0)                              // 000000000120: BF8C007F
  v_mul_legacy_f32  v4, s36, v1                         // 000000000124: 0E080224
  v_mul_legacy_f32  v9, s37, v1                         // 000000000128: 0E120225
  v_mul_legacy_f32  v1, s38, v1                         // 00000000012C: 0E020226
  v_mad_legacy_f32  v3, s28, v5, v3 clamp               // 000000000130: D2800803 040E0A1C
  v_mac_f32     v10, v4, v6                             // 000000000138: 3E140D04
  v_mac_f32     v11, v9, v8                             // 00000000013C: 3E161109
  v_mac_f32     v7, v1, v0                              // 000000000140: 3E0E0101
  v_mul_legacy_f32  v1, s8, v3                          // 000000000144: 0E020608
  v_mul_legacy_f32  v4, s9, v3                          // 000000000148: 0E080609
  v_mul_legacy_f32  v3, s10, v3                         // 00000000014C: 0E06060A
  v_mad_legacy_f32  v10, v1, v6, v10 clamp              // 000000000150: D280080A 042A0D01
  v_mad_legacy_f32  v11, v4, v8, v11 clamp              // 000000000158: D280080B 042E1104
  v_mad_legacy_f32  v7, v3, v0, v7 clamp                // 000000000160: D2800807 041E0103
label_005A:
  s_mov_b64     exec, s[40:41]                          // 000000000168: BEFE0428
  v_cvt_pkrtz_f16_f32  v0, v10, v11                     // 00000000016C: 5E00170A
  v_cvt_pkrtz_f16_f32  v1, v7, v2                       // 000000000170: 5E020507
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000174: F8001C0F 00000100
  s_endpgm                                              // 00000000017C: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   15
//  NumSRegs:                   44
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   85
//  CycleSimNWaves:             85
//  Code Size:                  384
//Assembler Counts:
//  num_32bit_ops                     : 80
//  num_64bit_ops                     : 8
//  num_alu                           : 66
//  num_fc                            : 21
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 0
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 5
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 3
//  num_inst_sop2                     : 2
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 4
//  num_inst_vop2                     : 40
//  num_inst_vop3                     : 9
//  num_inst_vopc                     : 1
//  num_inst_vintrp                   : 14
//  constant_literal_operands         : 0
//  num_tex                           : 1
//  num_vmem_group                    : 0
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 15
// m_uNumSRegs                       : 44
// m_uSCCodeSize                     : 384
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 85
// m_uCycleSimNWaves                 : 85

// Assembler Counts:
// num_32bit_ops                     : 80
// num_64bit_ops                     : 8
// num_alu                           : 66
// num_fc                            : 21
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 0
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 5
// num_inst_sopc                     : 0
// num_inst_sop1                     : 3
// num_inst_sop2                     : 2
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 4
// num_inst_vop2                     : 40
// num_inst_vop3                     : 9
// num_inst_vopc                     : 1
// num_inst_vintrp                   : 14
// num_inst_smem                     : 11
// constant_literal_operands         : 0
// num_tex                           : 1
// num_vmem_group                    : 0
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE DGSLLambert_mainTk[] =
{
     68,  88,  66,  67, 202, 149, 
    156, 213, 155,  56,  97,   8, 
    220,  82, 185, 135, 191, 233, 
     58, 119,   1,   0,   0,   0, 
    215,   7,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     32,   1,   0,   0,  84,   1, 
      0,   0, 100,   7,   0,   0, 
    116,   7,   0,   0,  73,  83, 
     71,  78, 228,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0, 200,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0, 212,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0, 218,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   0, 
      0,   0, 218,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   7,   7, 
      0,   0, 218,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,   7,   0, 
      0,   0, 218,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,   7,   0, 
      0,   0, 218,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      6,   0,   0,   0,  15,   0, 
      0,   0, 218,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      7,   0,   0,   0,   7,   0, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88,   8,   6,   0,   0, 
     80,   0,   0,   0, 130,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 171,   0, 
      0,   0,  80,   0,   0,   0, 
    166,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   1,   0,   0,   0, 
     21,   0,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3, 114,  16,  16,   0, 
      3,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   3,   0,   0,   0, 
     24,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     58,  16,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  13,   0, 
      4,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   3,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  68,   0,   0,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  16,  32,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      1,   0,   0,   0,   9,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  11, 114,   0,  16,   0, 
      1,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     16,  32,   0,   8, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,  10,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   2,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
      2,   0,   0,   0,  50,   0, 
      0,   9, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  16,  32, 
      0,   8, 130,   0,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
     11,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   8, 114,   0, 
     16,   0,   2,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,  50,   0,   0,   9, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      2,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  16,  32,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   4,   0,   0,   0, 
     50,  32,   0,   9, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     58,  16,  16,   0,   1,   0, 
      0,   0,  62,   0,   0,   1, 
     53,  16,   0,   0, 215,   0, 
      0,   0,  23,   0,   1,   0, 
     41, 184,  16,   0, 120,   1, 
    237,  88, 207,  79,  19,  65, 
     20, 158, 217, 157, 221, 238, 
    110, 119, 135, 118,  83,  74, 
    105,  42,  41,  70,  72,  99, 
    128, 144, 224, 201, 152, 141, 
    252,  72,  48, 129,  68,   3, 
     53,  33, 186,  34,  45,  52, 
    177,  74, 161, 105,  73, 244, 
     96, 106,  53, 128, 134,  16, 
     67, 140,   7,  14,  30,  61, 
    240,   7, 120, 240,  68, 201, 
    158, 246,  76, 188, 250,  31, 
    248,   7, 120,  32, 232, 123, 
    203,  46,  86, 144,  91,  19, 
     77, 236, 151, 124, 243, 246, 
    155, 121, 251, 230, 205, 204, 
     30, 230, 237, 231,   8, 241, 
    240,  62, 241, 213,  66, 123, 
    171, 111,  35, 190,  43,  16, 
     34, 193,  51,   5, 162,  69, 
    236,  26, 216,  18, 146, 237, 
    192, 150, 144,  12,  54, 232, 
      0, 190, 216,  53,   0, 172, 
    131, 190,   9,  22, 199,   2, 
     18, 178,  57,  54,  50, 178, 
     53, 134,  79, 232, 131, 190, 
    119, 125, 222,   1,  42,  64, 
     28, 236,   4,  98, 184, 179, 
      8, 230,  23, 129,  48, 213, 
     41,  24,  16, 227, 171,  64, 
    124, 143,   3, 195,  64, 196, 
    185,  56,   5, 108, 254, 140, 
     57,  32, 230, 116,  17, 188, 
    196, 125,  96,  92, 204,  19, 
    129, 107, 249, 219,  56, 187, 
     78, 220, 163, 224, 156,  16, 
    120,  30, 205, 192,  61,  10, 
    186,  18, 254, 162, 131,  61, 
     29, 240,  53,  26,  92, 219, 
      1, 240,  34, 252,   0, 224, 
    185,  53,  35, 208,  24,  79, 
    166,  16,   5,  58, 100, 177, 
     11,  38, 130, 142, 255,  12, 
    248, 109,  34, 112,  47, 144, 
    248, 157, 227, 190,   6,   8, 
    198, 239,  99,  67, 234,  13, 
    228,  78, 130, 124,  71,  21, 
    104,  10,  90,  67, 233, 107, 
     17, 181, 247, 129,  55, 105, 
      8, 174, 117, 145, 249, 144, 
     36, 204, 119, 164, 224, 125, 
     56,  92, 208,  54, 104, 187, 
     73, 223,   3, 125, 175,  73, 
     47, 128,  94, 104, 210, 121, 
    208, 249,  64,   7, 241,  59, 
    188, 249,  66,   2, 158,  53, 
    116, 214, 254, 101, 182, 115, 
    108,  13, 219,  57, 182, 134, 
    237,  28,  91, 195, 118, 142, 
    173,  97,  59, 199, 214, 176, 
    157,  99, 107, 216, 206, 177, 
    101,  36,  53, 182, 183,  79, 
    168, 115,  32, 136,  71, 251, 
     68,  84,  92,  42, 170, 110, 
    157, 177, 231, 153, 199, 123, 
     91,  51, 100, 189,  81, 203, 
     28, 191,  38, 178, 238,  18, 
     41, 226,  82, 217, 112,  95, 
    144, 237, 198,  21, 181, 238, 
     16,  22, 115, 169,  20, 117, 
    197, 144, 206,  41, 235, 116, 
    153, 170,  91,  25, 117, 211, 
    145, 194, 186, 197, 212,  55, 
    206, 128, 186, 229, 200,  15, 
    244,  26,  81, 183, 157,  97, 
    245, 173,  35,  26,  50,  39, 
    210,  43,  71,  81, 119,  28, 
    102,  40,  28, 227,   8,  50, 
    231, 186, 250, 206, 145,  12, 
    141,  83, 133,  91,  17, 117, 
    221,   9,  41, 245,  67, 162, 
    245, 192,  21,  55, 225,  18, 
    154, 118, 225,   2, 236, 114, 
    217, 228,  17,  30, 227,  81, 
     30, 231,  38, 231, 156, 146, 
    110, 151, 210,  94, 151,  10, 
    212,  53,  20, 211, 138, 203, 
      2, 215, 140,  24,  15,  71, 
    227,  60,  68,  57,  79,   8, 
    137,  90, 183, 144, 172,  37, 
    133,  84,  77, 133, 120, 186, 
    214, 207,  58,  21, 193, 234, 
    145, 101, 206,  18,  49,  75, 
     74, 198,  45,  57, 197, 173, 
    180, 153, 224, 189, 102, 146, 
     95,  54,  77, 152, 191, 126, 
     24, 211, 100, 118,  73, 145, 
     45, 221, 136,  89,  70,  52, 
    110, 169, 148,  91, 222, 122, 
      5, 133, 247,   9,  38, 239, 
     23,   4,  46, 130,  95,  74, 
    227, 140, 129, 143,  10,  62, 
     20, 124,  20, 152,  95, 149, 
     21, 174,  65, 124,  13, 198, 
    169, 113, 149, 133, 193, 178, 
    232,  16, 195, 245, 136, 180, 
    135, 101, 216, 241,  62, 220, 
    149, 127, 187, 107,  19, 242, 
    178, 209, 141,  22,  47, 249, 
     77, 240,  36, 243,  28,  78, 
     33, 160, 132, 190, 224, 238, 
    143, 248, 224,  23,   5, 203, 
    190,  29,   6, 158, 212, 179, 
    162,  23, 254, 164,  38, 198, 
    170, 238, 164,  14, 102,  68, 
    134, 150, 144,  27, 131, 233, 
    167, 163,  43,  27, 248, 232, 
    225, 139, 255, 254,  39, 223, 
    166, 129,  58, 240,  23,  62, 
     98, 115,  14,  71, 190, 255, 
     55, 223, 226, 175,   0, 204, 
     15,  14,  26,  90,   0,  22, 
    140, 128, 148, 255, 143,  32, 
    230,  91, 172, 245, 176,  20, 
     57, 155, 199,  53, 127, 220, 
      6,  98, 166, 227, 215, 237, 
    153,  66, 121, 181, 106, 207, 
    229,  87, 159,  13, 142, 102, 
     39,   7, 103, 115, 165, 242, 
    114, 161, 106,  79,  21, 215, 
    170, 246,  68, 177,  82,  88, 
     92, 155, 203,  78, 217, 213, 
    202, 162,  61, 251,  40, 183, 
     84, 168,  84, 237, 241, 213, 
     82, 185, 184,  92,  88, 242, 
     94, 186, 189,  82, 152, 152, 
    156, 157, 158, 206, 149, 242, 
    133, 202, 218, 195,  82, 174, 
    184, 146, 125,  50,  84,  94, 
    202, 147, 159,   1,  56,  11, 
     55,   0,  88,  72,  83,  72, 
      8,   0,   0,   0,  60,  45, 
     32, 119,  65, 110, 133,   0, 
     88,  80,  68,  80,  91,   0, 
      0,   0,  67,  58,  92,  82, 
    101, 112, 111, 115,  92,  88, 
     98, 111, 120,  45,  65,  84, 
     71,  45,  83,  97, 109, 112, 
    108, 101, 115,  92,  75, 105, 
    116, 115,  92,  68, 105, 114, 
    101,  99, 116,  88,  84,  75, 
     92, 115, 114,  99,  92,  83, 
    104,  97, 100, 101, 114, 115, 
     92,  67, 111, 109, 112, 105, 
    108, 101, 100,  92,  88,  98, 
    111, 120,  79, 110, 101,  68, 
     71,  83,  76,  76,  97, 109, 
     98, 101, 114, 116,  95, 109, 
     97, 105, 110,  84, 107,  46, 
    112, 100,  98
};
