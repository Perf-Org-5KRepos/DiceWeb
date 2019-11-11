#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float       
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
// First Precompiled Shader at offset:[72]
// Embedded Data:
//  0x00000048 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000043 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v1.xyxx, t0.xyzw, s0
mul r1.xyz, r0.xyzx, cb0[0].xxxx
mad r0.xyz, r0.xyzx, cb0[0].xxxx, l(1.000000, 1.000000, 1.000000, 0.000000)
mov o0.w, r0.w
div o0.xyz, r1.xyzx, r0.xyzx
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[72], bundle is:[156] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_PSReinhard.pdb
// Shader Semantic Hash      : 0xc3dc71fcf2550df7
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask  3, param0, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 136 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 7;
NumSgprs             = 20;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000001
SPIC:NUM_INTERP             = 1
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

; export table for mrt0 [patch@(bytes=0x74, dwords=0x1D)]
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
  exp           mrt0, v0, off, off, off done vm         // 000000000008: F8001801 00000000
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, off, off done vm          // 000000000008: F8001803 00000100
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v3, off, off done vm          // 000000000008: F8001803 00000300
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000000: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000004: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v0, v1                      // 000000000000: 5C000300
  v_cvt_pknorm_u16_f32  v1, v2, v3                      // 000000000004: 5C020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v0, v1                      // 000000000000: 5A000300
  v_cvt_pknorm_i16_f32  v1, v2, v3                      // 000000000004: 5A020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v0, v1                          // 000000000000: 60000300
  v_cvt_pk_u16_u32  v1, v2, v3                          // 000000000004: 60020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v0, v1                          // 000000000000: 62000300
  v_cvt_pk_i16_i32  v1, v2, v3                          // 000000000004: 62020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, v2, v3 done vm            // 000000000008: F800180F 03020100
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[16:17], exec                          // 000000000000: BE90047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  s_load_dwordx16  s[0:15], s[0:1], 0x00                // 00000000000C: C1000100
  v_interp_p1_f32  v2, v0, attr0.x                      // 000000000010: C8080000
  v_interp_p2_f32  v2, v1, attr0.x                      // 000000000014: C8090001
  v_interp_p1_f32  v3, v0, attr0.y                      // 000000000018: C80C0100
  v_interp_p2_f32  v3, v1, attr0.y                      // 00000000001C: C80D0101
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[0:3], v[2:3], s[0:7], s[8:11] dmask:0xf // 000000000024: F0800F00 00400002
  s_buffer_load_dword  s0, s[12:15], 0x00               // 00000000002C: C2000D00
  s_waitcnt     vmcnt(0) & lgkmcnt(0)                   // 000000000030: BF8C0070
  v_mul_legacy_f32  v4, s0, v0                          // 000000000034: 0E080000
  v_mul_legacy_f32  v5, s0, v1                          // 000000000038: 0E0A0200
  v_mul_legacy_f32  v6, s0, v2                          // 00000000003C: 0E0C0400
  v_mad_f32     v0, v0, s0, 1.0                         // 000000000040: D2820000 03C80100
  v_mad_f32     v1, v1, s0, 1.0                         // 000000000048: D2820001 03C80101
  v_mad_f32     v2, v2, s0, 1.0                         // 000000000050: D2820002 03C80102
  v_rcp_f32     v0, v0                                  // 000000000058: 7E005500
  v_mul_f32     v0, v4, v0                              // 00000000005C: 10000104
  v_rcp_f32     v1, v1                                  // 000000000060: 7E025501
  v_mul_f32     v1, v5, v1                              // 000000000064: 10020305
  v_rcp_f32     v2, v2                                  // 000000000068: 7E045502
  v_mul_f32     v2, v6, v2                              // 00000000006C: 10040506
  s_mov_b64     exec, s[16:17]                          // 000000000070: BEFE0410
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000074: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000078: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 00000000007C: F8001C0F 00000100
  s_endpgm                                              // 000000000084: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   7
//  NumSRegs:                   20
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   85
//  CycleSimNWaves:             85
//  Code Size:                  136
//Assembler Counts:
//  num_32bit_ops                     : 24
//  num_64bit_ops                     : 5
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
//  num_inst_vop1                     : 3
//  num_inst_vop2                     : 8
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 4
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
// m_uNumVRegs                       : 7
// m_uNumSRegs                       : 20
// m_uSCCodeSize                     : 136
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 85
// m_uCycleSimNWaves                 : 85

// Assembler Counts:
// num_32bit_ops                     : 24
// num_64bit_ops                     : 5
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
// num_inst_vop1                     : 3
// num_inst_vop2                     : 8
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 4
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

const BYTE ToneMap_PSReinhard[] =
{
     68,  88,  66,  67, 163, 154, 
     10,  38, 225, 112, 147, 207, 
     34, 227,  31, 154,  51, 254, 
     74,  60,   1,   0,   0,   0, 
    211,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   0,   0,   0, 192,   0, 
      0,   0,  96,   4,   0,   0, 
    112,   4,   0,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88, 152,   3, 
      0,   0,  80,   0,   0,   0, 
    230,   0,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
     72,   0,   0,   0,  80,   0, 
      0,   0,  67,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   2,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     50,   0,   0,  13, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   6, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     14,   0,   0,   7, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  53,  16,   0,   0, 
    158,   0,   0,   0,  23,   0, 
      1,   0,  41, 200,  15,   0, 
    120,   1, 237,  87,  61, 111, 
    211,  80,  20, 189, 239, 217, 
    249, 104, 112,  18,  11,  49, 
     20,   9, 164,  14,  29,  24, 
     40,  75, 153,  58,  65,  91, 
    196,  80,  33,  80, 147,  72, 
     85, 101, 149,  38, 141, 165, 
     70, 106,  19, 147, 116, 232, 
    100, 218,  78,  29,  24, 202, 
      6,  72, 108, 140, 252,   2, 
    134, 132, 175, 193,  51, 115, 
     71,  86,  36, 196,   2,  67, 
     84, 184, 199, 121, 175,  60, 
      2, 221,  44, 129, 132, 143, 
    116, 238, 241, 241, 179, 111, 
    174, 125,  29, 233, 190, 168, 
     76,  49, 110,  29,  63, 126, 
     14, 253,  20, 188, 218, 117, 
      4,  81, 134, 143,  89,  98, 
      5, 158,  20,  17, 137, 130, 
     18,  34, 209,  21,   4,  92, 
     32, 137, 114,  44,  23, 152, 
    135, 204,  27,  76, 172, 105, 
    206, 206, 230, 230, 159,  61, 
     45, 207, 243,  33, 185, 204, 
      2, 179, 166,  56, 201,  68, 
    254, 243, 204,   9,  38, 210, 
      1,  90,   1,  11, 129,  97, 
     35,  24, 192, 249,  60,  83, 
      3, 235,  92,  74,  12, 168, 
    153, 131, 124, 132,  63, 227, 
     50,  19, 245, 159,   5, 212, 
    166, 115,  65,  81,  39, 128, 
    231, 253, 219,  24, 213, 245, 
     51, 130, 186,  79,   0, 250, 
     97,   2, 173, 195,  53, 192, 
    148, 234, 163, 126, 191, 215, 
    149, 215, 189, 124, 205,  60, 
     11, 223,  25, 232, 165,   9, 
    237, 145,  63,  43,  56, 171, 
    217, 156, 255,  12, 250,  91, 
    197, 187, 192, 183, 136, 119, 
    163, 254, 102,  49, 244,  58, 
    190,  61, 162, 189,   1, 120, 
     52,  73, 223, 224, 180,  23, 
     99, 222, 130,  71,  66, 211, 
    163, 121,  22, 173, 201, 156, 
     92,  43,  95,  82, 235,  22, 
    121, 236,  61, 195, 175, 178, 
     95,  53, 252,  58, 251, 117, 
    195,  55, 216,  55,  78, 189, 
    202,  95, 142, 127,  79,  90, 
    232,  53, 159,  12, 255, 101, 
    166,  53,  38, 195, 180, 198, 
    100, 152, 214, 152,  12, 211, 
     26, 147,  97,  90,  99,  50, 
     76, 107,  76, 134, 105, 141, 
    137, 145,  66, 251, 168,  31, 
     22,  78, 250, 210,  26, 246, 
    121, 126, 123, 195, 131, 119, 
     36, 104,  34,  34, 225,  68, 
     66,  20, 163, 135, 244, 104, 
     64, 229, 189, 207,  18,  59, 
    179,  34, 189,  13, 224,  41, 
     95,  34,  89,  40, 145, 237, 
    240, 212, 127, 240, 129,  68, 
    100,   9,  86, 193,  42,  89, 
     37,  43, 111, 208,  66,  91, 
    144,  43, 106,  50, 204,  88, 
    210, 149,  53,  59, 204, 102, 
    108, 215, 181,  79, 250,  60, 
     51, 254,  58, 115, 210, 254, 
    224,  34,  20, 195, 238,  56, 
    242, 241,   5, 167, 136,  29, 
     39,  54, 183,   7, 241, 109, 
    124, 206, 129,  42, 188,  84, 
    251, 145,  67, 165, 211, 204, 
    209,  30,  17,  67, 239,  40, 
    143,  77,  89, 142,  68,  95, 
    139, 181,  47, 195,   7, 199, 
    239, 112,  12, 124,  84, 247, 
    188,  87,  58, 197,  52, 115, 
     19, 189,  64, 248,  13, 142, 
     26, 210, 135, 234,  62, 204, 
    237, 152, 213,  75, 122,  23, 
    172, 206,  95,  85, 215,  77, 
     43, 197, 179, 156,  99, 142, 
    215, 177, 168, 214,  61,  38, 
     42,  93, 152, 243, 150, 253, 
    160, 211, 243,  86,  26, 157, 
    221, 153, 155, 213, 219,  51, 
    149, 250, 118, 176, 229, 247, 
    188, 165, 214,  78, 207,  91, 
    108, 117, 253, 141, 157, 149, 
    234, 146, 215, 235, 110, 120, 
    149, 205, 122, 211, 239, 246, 
    188, 133, 206, 118, 208, 218, 
    242, 155, 241,  77, 119, 219, 
    126, 181, 211, 246, 239, 212, 
    131, 251, 247,  42, 203, 126, 
    171, 189,  89, 239,  54, 175, 
      5, 205,   6, 253,   0, 231, 
     31, 229,  38,   0,  88,  72, 
     83,  72,   8,   0,   0,   0, 
    247,  13,  85, 242, 252, 113, 
    220, 195,  88,  80,  68,  80, 
     91,   0,   0,   0,  67,  58, 
     92,  82, 101, 112, 111, 115, 
     92,  88,  98, 111, 120,  45, 
     65,  84,  71,  45,  83,  97, 
    109, 112, 108, 101, 115,  92, 
     75, 105, 116, 115,  92,  68, 
    105, 114, 101,  99, 116,  88, 
     84,  75,  92, 115, 114,  99, 
     92,  83, 104,  97, 100, 101, 
    114, 115,  92,  67, 111, 109, 
    112, 105, 108, 101, 100,  92, 
     88,  98, 111, 120,  79, 110, 
    101,  84, 111, 110, 101,  77, 
     97, 112,  95,  80,  83,  82, 
    101, 105, 110, 104,  97, 114, 
    100,  46, 112, 100,  98
};