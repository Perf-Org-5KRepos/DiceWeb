#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// TEXCOORD                 0   xy          1     NONE   float   xy  
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
// First Precompiled Shader at offset:[45]
// Embedded Data:
//  0x0000002d - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000028 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 1
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v1.xyxx, t0.xyzw, s0
mul o0.xyzw, r0.xyzw, v0.xyzw
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[45], bundle is:[154] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneBasicEffect_PSBasicTxNoFog.pdb
// Shader Semantic Hash      : 0xd100b1d8462105a9
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask  3, param1, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 124 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 2;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
NumVgprs             = 9;
NumSgprs             = 20;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000000

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
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x68, dwords=0x1A)]
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
  exp           mrt0, v1, off, off, off done vm         // 000000000008: F8001801 00000001
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v2, off, off done vm          // 000000000008: F8001803 00000201
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v0, off, off done vm          // 000000000008: F8001803 00000001
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v1, v1, v2                       // 000000000000: 5E020501
  v_cvt_pkrtz_f16_f32  v0, v3, v0                       // 000000000004: 5E000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v1, v1, v2                      // 000000000000: 5C020501
  v_cvt_pknorm_u16_f32  v0, v3, v0                      // 000000000004: 5C000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v1, v1, v2                      // 000000000000: 5A020501
  v_cvt_pknorm_i16_f32  v0, v3, v0                      // 000000000004: 5A000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v1, v1, v2                          // 000000000000: 60020501
  v_cvt_pk_u16_u32  v0, v3, v0                          // 000000000004: 60000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v1, v1, v2                          // 000000000000: 62020501
  v_cvt_pk_i16_i32  v0, v3, v0                          // 000000000004: 62000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v2, v3, v0 done vm            // 000000000008: F800180F 00030201
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[16:17], exec                          // 000000000000: BE90047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx8  s[4:11], s[0:1], 0x00                 // 000000000008: C0C20100
  s_load_dwordx4  s[12:15], s[0:1], 0x08                // 00000000000C: C0860108
  s_mov_b32     m0, s2                                  // 000000000010: BEFC0302
  v_interp_p1_f32  v2, v0, attr1.x                      // 000000000014: C8080400
  v_interp_p1_f32  v3, v0, attr1.y                      // 000000000018: C80C0500
  v_interp_p2_f32  v2, v1, attr1.x                      // 00000000001C: C8090401
  v_interp_p2_f32  v3, v1, attr1.y                      // 000000000020: C80D0501
  s_waitcnt     lgkmcnt(0)                              // 000000000024: BF8C007F
  image_sample  v[2:5], v[2:3], s[4:11], s[12:15] dmask:0xf // 000000000028: F0800F00 00610202
  v_interp_p1_f32  v6, v0, attr0.x                      // 000000000030: C8180000
  v_interp_p1_f32  v7, v0, attr0.y                      // 000000000034: C81C0100
  v_interp_p1_f32  v8, v0, attr0.z                      // 000000000038: C8200200
  v_interp_p1_f32  v0, v0, attr0.w                      // 00000000003C: C8000300
  v_interp_p2_f32  v6, v1, attr0.x                      // 000000000040: C8190001
  v_interp_p2_f32  v7, v1, attr0.y                      // 000000000044: C81D0101
  v_interp_p2_f32  v8, v1, attr0.z                      // 000000000048: C8210201
  v_interp_p2_f32  v0, v1, attr0.w                      // 00000000004C: C8010301
  s_waitcnt     vmcnt(0)                                // 000000000050: BF8C0F70
  v_mul_legacy_f32  v1, v2, v6                          // 000000000054: 0E020D02
  v_mul_legacy_f32  v2, v3, v7                          // 000000000058: 0E040F03
  v_mul_legacy_f32  v3, v4, v8                          // 00000000005C: 0E061104
  v_mul_legacy_f32  v0, v5, v0                          // 000000000060: 0E000105
  s_mov_b64     exec, s[16:17]                          // 000000000064: BEFE0410
  v_cvt_pkrtz_f16_f32  v1, v1, v2                       // 000000000068: 5E020501
  v_cvt_pkrtz_f16_f32  v0, v3, v0                       // 00000000006C: 5E000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000070: F8001C0F 00000001
  s_endpgm                                              // 000000000078: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   9
//  NumSRegs:                   20
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   79
//  CycleSimNWaves:             79
//  Code Size:                  124
//Assembler Counts:
//  num_32bit_ops                     : 27
//  num_64bit_ops                     : 2
//  num_alu                           : 18
//  num_fc                            : 9
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 3
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 4
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 6
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 12
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 9
// m_uNumSRegs                       : 20
// m_uSCCodeSize                     : 124
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 79
// m_uCycleSimNWaves                 : 79

// Assembler Counts:
// num_32bit_ops                     : 27
// num_64bit_ops                     : 2
// num_alu                           : 18
// num_fc                            : 9
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 3
// num_inst_sopc                     : 0
// num_inst_sop1                     : 4
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 6
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 12
// num_inst_smem                     : 2
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
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

const BYTE BasicEffect_PSBasicTxNoFog[] =
{
     68,  88,  66,  67,  20, 165, 
      4, 192, 163, 111,  14,  36, 
     91,  44, 250,  66,  10,  97, 
    192, 247,   1,   0,   0,   0, 
     95,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    132,   0,   0,   0, 184,   0, 
      0,   0, 228,   3,   0,   0, 
    244,   3,   0,   0,  73,  83, 
     71,  78,  72,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  62,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  67,  79,  76,  79, 
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
     69,  88,  36,   3,   0,   0, 
     80,   0,   0,   0, 201,   0, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0,  45,   0, 
      0,   0,  80,   0,   0,   0, 
     40,   0,   0,   0, 106,   8, 
      0,   1,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3, 242,  16, 
     16,   0,   0,   0,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     53,  16,   0,   0, 156,   0, 
      0,   0,  23,   0,   1,   0, 
     41, 164,  15,   0, 120,   1, 
    237,  87, 191, 111, 211,  64, 
     20, 126, 103,  59,  81,  90, 
     26, 187,  64, 135,  20,  90, 
    169, 221, 186, 148,  63, 160, 
      3,  34,  20, 202,  80,  68, 
     43,  18, 161, 168, 178,  66, 
    243, 195, 165, 145,  90,  28, 
    197,  29,  58, 160,  16, 132, 
    196, 212, 161,  99,  97,  98, 
    232, 194, 200, 198, 148,  68, 
     76,  55, 128,  68,  55,  70, 
    254,   4, 198,  14, 168, 240, 
     62, 231,  14, 156,  64,  55, 
     75,  32, 225,  79, 250, 222, 
    187, 207, 126, 126, 126, 119, 
    103,  75, 247, 142,  29,  10, 
     81, 186, 251,  60,  11, 239, 
    151,  31,  92, 127, 205,  62, 
    197,  20, 202,   3,  71, 225, 
     93, 162, 117,  27, 150, 104, 
      1,   6,   1,   6, 209,  24, 
    187,  41, 230,  19, 230,  13, 
     38, 238, 105, 126, 252, 208, 
    207, 191, 122, 121, 146, 231, 
     33,  33, 197,  56, 115,  77, 
    241,  42, 147,  31, 167,  75, 
     76, 228,  64,  58,  64, 123, 
    192, 132,  97,  88,  48,  35, 
     72, 195,  40,  76,  48, 145, 
     11, 128, 143, 230,  32,  15, 
    230, 207, 152, 101, 226, 221, 
    231,   1, 181, 233,  92, 240, 
     58,  22, 243, 253, 219,  24, 
    212,  21, 181, 191, 246,   9, 
    192, 126,  68, 129, 173, 211, 
    113,  83, 106,  31, 245, 154, 
     45,  40, 141, 249,  97, 110, 
    125, 230, 121, 248, 206, 192, 
    122,  71, 161,  53, 242, 165, 
    105, 240,  81, 165, 197, 101, 
    162,  12,  70, 255,  23, 244, 
    183, 138, 181,   0,  39, 153, 
    234,  55,  11, 161, 239,  95, 
    129, 161,  78,  15,  60, 204, 
    209,  41, 148, 214, 130, 245, 
     96, 175,   6, 218, 132,  70, 
    178, 168, 102,  37,  82,  70, 
    217,  20,  84, 118, 102, 126, 
    106, 151, 181,  27, 209,  27, 
    172,  55,  34, 122, 147, 245, 
    102,  68,  87,  89,  87, 181, 
    214, 249, 157, 240, 125, 102, 
    184, 215, 124, 177, 253,  47, 
     51, 169,  49,  30,  38,  53, 
    198, 195, 164, 198, 120, 152, 
    212,  24,  15, 147,  26, 227, 
     97,  82,  99,  60,  76, 106, 
    140, 141, 212, 182,  14, 187, 
    237, 241, 179,  46, 137, 247, 
    253, 140, 120, 209,  55, 204, 
    111,  93, 178,  50, 146,  82, 
     19,  82,  88,  99,  82, 164, 
    178, 242,  41,  29, 244, 200, 
    233, 124,  53, 140,  10,  63, 
    145, 147,  36, 102,  36,  25, 
    115, 146, 155,  43,  41, 104, 
     90,  10,  49,  43, 133,  49, 
     47, 133,  41, 100, 211,  57, 
    232,  25,  89, 195,  54,  29, 
    203, 182,  46, 166, 237, 148, 
     32, 123, 210,  58, 235, 242, 
     57, 113, 232, 156,  73, 244, 
    172,  55, 141,  65, 120,  38, 
     29,  65, 102,  16, 161,  17, 
     42,  75,  12, 181,   2,  29, 
    213, 111, 108,  43, 159,  99, 
    162, 247, 176,  84,  87, 247, 
     38,  53, 191, 242, 249,  45, 
    157,  96,  12, 188,  83, 113, 
     71, 202, 207,  49, 135, 123, 
    144,  99, 152, 223, 240,  69, 
    197, 127,  82,  30, 103, 113, 
    156, 191, 109, 221, 217, 170, 
    235, 250, 128, 126, 170,  52, 
    106, 189, 192,  28, 173,  35, 
    167, 226, 234,  76,  84, 186, 
    188, 228, 222, 247, 154, 126, 
    224, 150, 170, 254, 254,  98, 
    190, 120, 103, 177,  80, 217, 
    109, 238, 120, 129, 187, 218, 
    216,  11, 220,  91, 141, 150, 
     87, 219,  43,  21,  87, 221, 
    160,  85, 115,  11, 219, 149, 
    186, 215,  10, 220, 101, 127, 
    183, 217, 216, 241, 234, 225, 
     67, 107, 143, 189, 155, 149, 
    160,  81, 187, 189, 181, 197, 
    161,  15, 215,  11, 161,  42, 
    238, 223, 243,  87, 252,  71, 
    215, 154, 245,  42, 253,   0, 
    113,  96, 228, 147,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0, 169,   5,  33,  70, 
    216, 177,   0, 209,  88,  80, 
     68,  80,  99,   0,   0,   0, 
     67,  58,  92,  82, 101, 112, 
    111, 115,  92,  88,  98, 111, 
    120,  45,  65,  84,  71,  45, 
     83,  97, 109, 112, 108, 101, 
    115,  92,  75, 105, 116, 115, 
     92,  68, 105, 114, 101,  99, 
    116,  88,  84,  75,  92, 115, 
    114,  99,  92,  83, 104,  97, 
    100, 101, 114, 115,  92,  67, 
    111, 109, 112, 105, 108, 101, 
    100,  92,  88,  98, 111, 120, 
     79, 110, 101,  66,  97, 115, 
    105,  99,  69, 102, 102, 101, 
     99, 116,  95,  80,  83,  66, 
     97, 115, 105,  99,  84, 120, 
     78, 111,  70, 111, 103,  46, 
    112, 100,  98
};
