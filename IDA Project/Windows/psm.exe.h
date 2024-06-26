enum PixelFormat : unsigned int {
	PixelFormat_None = 0,
	PixelFormat_Rgba = 1,
	PixelFormat_RgbaH = 2,
	PixelFormat_Rgba4444 = 3,
	PixelFormat_Rgba5551 = 4,
	PixelFormat_Rgb565 = 5,
	PixelFormat_LuminanceAlpha = 6,
	PixelFormat_LuminanceAlphaH = 7,
	PixelFormat_Luminance = 8,
	PixelFormat_LuminanceH = 9,
	PixelFormat_Alpha = 10,
	PixelFormat_AlphaH = 11,
	PixelFormat_Depth16 = 12,
	PixelFormat_Depth24 = 13,
	PixelFormat_Depth16Stencil8 = 14,
	PixelFormat_Depth24Stencil8 = 15,
	PixelFormat_Dxt1 = 16,
	PixelFormat_Dxt2 = 17,
	PixelFormat_Dxt3 = 18,
	PixelFormat_Dxt4 = 19,
	PixelFormat_Dxt5 = 20
};


/* 403 */
enum EnableMode : unsigned __int32
{
  EnableMode_None = 0x0,
  EnableMode_ScissorTest = 0x1,
  EnableMode_CullFace = 0x2,
  EnableMode_Blend = 0x4,
  EnableMode_DepthTest = 0x8,
  EnableMode_PolygonOffsetFill = 0x10,
  EnableMode_StencilTest = 0x20,
  EnableMode_Dither = 0x40,
  EnableMode_All = 0x7F,
};

/* 276 */
struct __declspec(align(4)) sce::pss::core::graphics::GraphicsContext
{
  int unk0;
  int unk1;
  int unk2;
  int unk3;
  int unk4;
  int unk5;
  int activeShaderProgram;
  int activeFrameBuffer;
  int unk6;
  int unk7;
  int unk8;
  int unk9;
  int unk10;
  int unk11;
  int unk12;
  int unk13;
  int unk14;
  int unk15;
  int unk16;
  int unk17;
  EnableMode currentEnableMode;
  int cullFaceBits;
  int unk20;
  int unk21;
  int unk22;
  int unk23;
  int unk24;
  char hasShaderOrFramebuffer;
  char hasFrameBuffer;
  int unk27;
  int unk28;
  int unk29;
};

/* 277 */
struct sce::pss::core::graphics::GraphicsObject
{
  void *ActiveStateChange;
  int Active;
};

/* 278 */
struct sce::pss::core::ExceptionInfo;

/* 279 */
struct sce::pss::core::graphics::GraphicsBaseTable;

/* 280 */
struct sce::pss::core::graphics::OpenGL;

/* 444 */
enum PixelBufferType : __int32
{
  PixelBufferType_None = 0x0,
  PixelBufferType_Texture2D = 0x1,
  PixelBufferType_TextureCube = 0x2,
  PixelBufferType_ColorBuffer = 0x3,
  PixelBufferType_DepthBuffer = 0x4,
};

/* 281 */
struct sce::pss::core::graphics::PixelBuffer
{
  sce::pss::core::graphics::GraphicsObject base;
  int unk1;
  int unk2;
  int unk3;
  int unk4;
  PixelBufferType type;
  int format;
  int option;
  int width;
  int height;
  int level;
  int unk11;
  int unk12;
  int unk13;
  int unk14;
  int unk15;
  __int16 unk16;
  char unk17;
  char unk18;
  int unk19;
  int unk20;
  int unk21;
  std::string *filename;
};

/* 282 */
struct sce::pss::core::graphics::ShaderProgram
{
  sce::pss::core::graphics::GraphicsObject base;
  int unk1;
  int unk2;
  int unk3;
  int unk4;
  int glShader;
  int unk6;
  int unk7;
  int unk8;
  int unk9;
  int unk10;
  int unk11;
  int unk12;
  int unk13;
  int unk14;
  int unk15;
  int unk16;
  int unk17;
  int unk18;
  int unk19;
  char *vertexShaderCgx;
  char *fragmentShaderCgx;
  int vertexShaderLen;
  int fragmentShaderLen;
};

/* 283 */
struct sce::pss::core::impose::InGameMenu;

/* 284 */
struct sce::pss::core::PsmObject;

/* 285 */
struct sce::pss::core::IntHandleTable;

/* 286 */
struct sce::pss::core::memory::HeapAllocator
{
  int *vftable;
  int unk0;
  int flag;
  int heapSz;
  char resHeapName[64];
  char flag0;
  char flag1;
  char flag2;
  char flag3;
  int mutex;
  int unk9;
  int unk10;
  int unk11;
  int unk12;
  int unk13;
  int unk14;
  int unk15;
  int unk16;
  int unk17;
  char unk18;
  char unk19;
  char unk20;
  char unk22;
  int unk23;
  int unk24;
  int unk25;
  int unk26;
  int unk27;
  int unk28;
  int unk29;
  int unk30;
  int unk31;
  int unk32;
  int unk33;
  int unk34;
  int unk35;
  int unk36;
  int unk37;
  int unk38;
  int unk39;
  int unk40;
  int unk41;
  int unk42;
  int unk43;
  int unk44;
  int unk45;
  int unk46;
  int unk47;
  int unk48;
  int unk49;
  int unk50;
  int unk51;
  int unk52;
  int unk53;
  int unk54;
  int unk55;
  int unk56;
  int unk57;
  int unk58;
  int unk59;
  int unk60;
  int unk61;
  int unk62;
  int unk63;
  int unk64;
  int unk65;
  int unk66;
  int unk67;
  int unk68;
  int unk69;
  int unk70;
  int unk71;
  int unk72;
  int unk73;
  int unk74;
  int unk75;
  int unk76;
  int unk77;
  int unk78;
  int unk79;
};

/* 287 */
struct sce::pss::core::memory::MemoryAllocator;

/* 288 */
struct sce::pss::core::imaging::impl::ImageArray;

/* 289 */
struct sce::pss::core::imaging::impl::ImageAttribute;

/* 290 */
struct sce::pss::core::imaging::impl::ImageBmp;

/* 291 */
struct sce::pss::core::imaging::impl::ImageBmpWrap;

/* 292 */
struct sce::pss::core::imaging::impl::ImageCreateFromBuffer;

/* 293 */
struct sce::pss::core::imaging::impl::ImageSource;

/* 294 */
struct sce::pss::core::imaging::impl::ImageDdsCore;

/* 295 */
struct sce::pss::core::imaging::impl::ImageFileFormat;

/* 296 */
struct sce::pss::core::imaging::impl::ImageGim;

/* 297 */
struct sce::pss::core::imaging::impl::ImageOperation;

/* 298 */
struct sce::pss::core::imaging::impl::ImagePng;

/* 299 */
struct sce::pss::core::imaging::impl::ImagePngWrap;

/* 300 */
struct cxml::Element;

/* 301 */
struct cxml::Attribute;

/* 302 */
struct cxml::Header;

/* 303 */
struct sce::pss::core::threading::Thread;

/* 304 */
struct sce::pss::core::memory;

/* 305 */
struct sce::pss::core;

/* 306 */
struct sce::pss::core::audio::Sound;

/* 307 */
struct sce::pss::core::audio::SoundPlayer;

/* 308 */
struct sce::pss::core::audio::Bgm;

/* 309 */
struct sce::pss::core::audio::BgmPlayer;

/* 310 */
struct sce::pss::core::camera::Camera;

/* 311 */
struct sce::pss::core::environment::InAppPurchaseDialog;

/* 312 */
struct sce::pss::core::environment::Shell::Action;

/* 313 */
struct sce::pss::core::environment::ImageExport;

/* 314 */
struct sce::pss::core::environment::PersistentMemory;

/* 315 */
struct sce::pss::core::environment::PhotoImportDialog::Impl;

/* 316 */
struct sce::pss::core::imaging::Font;

/* 317 */
struct sce::pss::core::imaging::Font::Impl;

/* 318 */
struct FontFileImage;

/* 319 */
struct sce::pss::core::input::GamePad;

/* 320 */
struct sce::pss::core::services;

/* 321 */
struct sce::pss::core::Buffer;

/* 322 */
struct sce::pss::core::SubConstBuffer;

/* 323 */
struct sce::pss::core::UnmanagedConstBuffer;

/* 324 */
struct sce::pss::core::UnmanagedBuffer;

/* 325 */
struct sce::pss::core::file::LocalFile;

/* 326 */
struct sce::pss::core::file::File;

/* 327 */
struct sce::pss::core::file::LocalFilePlatformImpl;

/* 328 */
struct sce::pss::core::file::LocalFileImpl;

/* 329 */
struct sce::pss::core::imaging::impl::filter;

/* 330 */
struct sce::pss::core::threading;

/* 331 */
struct sce::pss::core::environment::CameraImportDialog::Impl;

/* 332 */
struct sce::pss::core::environment::TextInputDialog;

/* 333 */
struct sce::pss::core::datetime::DateTime;

/* 334 */
struct sce::pss::core::graphics::Texture
{
  sce::pss::core::graphics::PixelBuffer pbuf;
};

/* 413 */
enum VertexFormat : unsigned __int32
{
  VertexFormat_None = 0x0,
  VertexFormat_Float = 0x100,
  VertexFormat_Float2 = 0x101,
  VertexFormat_Float3 = 0x102,
  VertexFormat_Float4 = 0x103,
  VertexFormat_Half = 0x200,
  VertexFormat_Half2 = 0x201,
  VertexFormat_Half3 = 0x202,
  VertexFormat_Half4 = 0x203,
  VertexFormat_Short = 0x600,
  VertexFormat_Short2 = 0x601,
  VertexFormat_Short3 = 0x602,
  VertexFormat_Short4 = 0x603,
  VertexFormat_UShort = 0x700,
  VertexFormat_UShort2 = 0x701,
  VertexFormat_UShort3 = 0x702,
  VertexFormat_UShort4 = 0x703,
  VertexFormat_Byte = 0x800,
  VertexFormat_Byte2 = 0x801,
  VertexFormat_Byte3 = 0x802,
  VertexFormat_Byte4 = 0x803,
  VertexFormat_UByte = 0x900,
  VertexFormat_UByte2 = 0x901,
  VertexFormat_UByte3 = 0x902,
  VertexFormat_UByte4 = 0x903,
  VertexFormat_ShortN = 0x1600,
  VertexFormat_Short2N = 0x1601,
  VertexFormat_Short3N = 0x1602,
  VertexFormat_Short4N = 0x1603,
  VertexFormat_UShortN = 0x1700,
  VertexFormat_UShort2N = 0x1701,
  VertexFormat_UShort3N = 0x1702,
  VertexFormat_UShort4N = 0x1703,
  VertexFormat_ByteN = 0x1800,
  VertexFormat_Byte2N = 0x1801,
  VertexFormat_Byte3N = 0x1802,
  VertexFormat_Byte4N = 0x1803,
  VertexFormat_UByteN = 0x1900,
  VertexFormat_UByte2N = 0x1901,
  VertexFormat_UByte3N = 0x1902,
  VertexFormat_UByte4N = 0x1903,
};

/* 335 */
struct sce::pss::core::graphics::VertexBuffer
{
  sce::pss::core::graphics::GraphicsObject base;
  int unk1;
  int errorCode;
  int unk3;
  int unk4;
  int vertexCount;
  int indexCount;
  int instDivisor;
  int unk8;
  int unk9;
  int unk10;
  int unk11;
  VertexFormat *vertexFormats;
  int vertexFormatsLen;
  int unk14;
  int unk15;
  int unk16;
  int unk17;
  int unk18;
  int unk19;
  int glReference;
  int unk20;
  int unk21;
  int unk23_ischecked;
  int unk24;
  int unk25;
  int unk26;
  int unk27;
  int unk28;
  int unk29;
  int unk30;
  char unk31;
};

/* 336 */
struct sce::pss::core::imaging::impl::ImageBlur;

/* 337 */
struct sce::pss::core::imaging::impl::ImageConvertModeDXT5;

/* 338 */
struct sce::pss::core::imaging::impl::ImageConvertMode32;

/* 339 */
struct sce::pss::core::imaging::impl::ImageCopy;

/* 340 */
struct sce::pss::core::imaging::impl::ImageCopyWithEdge;

/* 341 */
struct sce::pss::core::imaging::impl::ImageDds;

/* 342 */
struct sce::pss::core::imaging::impl::ImageFadeWithEdge;

/* 343 */
struct sce::pss::core::imaging::impl::ImageFlip;

/* 344 */
struct sce::pss::core::imaging::impl::ImageJpg;

/* 345 */
struct sce::pss::core::imaging::impl::ImageResize;

/* 346 */
struct sce::pss::core::imaging::impl::ImageRotate;

/* 347 */
struct sce::pss::core::imaging::impl::ImageSharpen;

/* 348 */
struct sce::pss::core::imaging::impl::ImageLinkDds;

/* 349 */
struct sce::pss::core::imaging::impl::ImageLinkGim;

/* 350 */
struct sce::pss::core::imaging::impl::ImageFromBuffer;

/* 351 */
struct sce::pss::core::imaging::impl::ImageFromFile;

/* 352 */
struct sce::pss::core::imaging::impl::ImageTransparentize;

/* 353 */
struct cxml::File;

/* 354 */
struct cxml::util;

/* 355 */
struct sce::pss::core::threading::Cond;

/* 356 */
struct sce::pss::core::camera;

/* 357 */
struct sce::pss::core::environment::SystemParameters;

/* 358 */
struct sce::pss::core::environment::SystemEvents;

/* 359 */
struct sce::pss::core::graphics::FrameBuffer
{
  sce::pss::core::graphics::GraphicsObject base;
  int unk1;
  int unk2;
  int unk3;
  int unk4;
  int unk5;
  int unk6;
  int unk7;
  int unk8;
  int unk9;
  int unk10;
  int unk11;
  char unk12;
  int unk13;
  int unk14;
  int unk15;
  int unk16;
  int unk17;
  int unk18;
  int unk19;
  int unk20;
  int unk21;
  int unk22;
  int unk23;
  int unk24;
};

/* 360 */
struct sce::pss::core::services::NetworkRequest;

/* 361 */
struct sce::pss::core::imaging::impl::ImageGif;

/* 362 */
struct sce::pss::core::threading::Mutex;

/* 363 */
struct sce::pss::core::environment::PhotoImportDialog;

/* 364 */
struct sce::pss::core::networkservices;

/* 365 */
struct sce::pss::core::environment::CameraImportDialog;

/* 366 */
struct sce::pss::core::threading::AMutex;

/* 367 */
struct sce::pss::core::location;

/* 368 */
struct sce::pss::core::input::Motion;

/* 369 */
struct sce::pss::core::input::Touch;

/* 370 */
struct sce::pss::core::audio;

/* 371 */
struct sce::pss::core::environment::Clipboard;

/* 372 */
struct sce::pss::core::environment;

/* 373 */
struct sce::pss::core::imaging;

/* 374 */
struct sce::pss::core::environment::CommonDialog;

/* 375 */
struct std::nothrow_t;

/* 376 */
struct sce::pss::core::MallocBuffer;

/* 377 */
struct sce::pss::core::HeapAllocBuffer;

/* 378 */
struct sce::pss::core::Globals;

/* 379 */
struct EdataFileFilter;

/* 380 */
struct sce::pss::core::environment::InAppPurchaseProduct;

/* 381 */
struct sce::pss::core::environment::Globals;

/* 382 */
struct sce::pss::core::environment::InAppPurchaseDialog::Impl;

/* 383 */
struct sce::pss::core::graphics::ShaderProgramOption
{
  int unk0;
  int unk1;
  int unk2;
  int unk3;
  int unk4;
  int unk5;
  int unk6;
  char unk7;
  char unk8;
};

/* 384 */
struct sce::pss::core::charcode;

/* 385 */
struct sce::pss::core::SubBuffer;

/* 386 */
struct sce::pss::core::graphics::DepthBuffer;

/* 387 */
struct sce::pss::core::graphics::ColorBuffer;

/* 388 */
struct sce::pss::core::graphics;

/* 389 */
struct sce::pss::core::graphics::TextureCube
{
  sce::pss::core::graphics::Texture tex;
  int unk21;
  int unk22;
  int unk23;
  int unk24;
};

/* 390 */
struct sce::pss::core::graphics::Texture2D
{
  sce::pss::core::graphics::Texture tex;
  int unk21;
  int unk22;
  int unk23;
  int unk24;
};

/* 391 */
struct sce::pss::core::impose::VirtualGamePad;

/* 392 */
struct sce::pss::core::file;

/* 393 */
struct sce::pss::core::input;

/* 394 */
struct DepthFunc
{
  unsigned int bits;
};

/* 395 */
struct BlendFunc
{
  unsigned int bits;
};

/* 396 */
struct StencilOp
{
  unsigned int bits;
};

/* 397 */
struct StencilFunc
{
  unsigned int bits;
};

/* 398 */
struct PolygonOffset
{
  float Factor;
  float Units;
};

/* 399 */
struct CullFace
{
  unsigned int bits;
};

/* 400 */
struct ImageRect
{
  int X;
  int Y;
  int Width;
  int Height;
};

/* 401 */
struct Vector4
{
  float X;
  float Y;
  float Z;
  float W;
};

/* 402 */
struct Vector2
{
  float X;
  float Y;
};

/* 404 */
enum ColorMask : __int32
{
  ColorMask_None = 0x0,
  ColorMask_R = 0x1,
  ColorMask_G = 0x2,
  ColorMask_B = 0x4,
  ColorMask_Rgb = 0x7,
  ColorMask_A = 0x8,
  ColorMask_Rgba = 0xF,
};

/* 405 */
enum GraphicsUpdate : __int32
{
  GraphicsUpdate_None = 0x0,
  GraphicsUpdate_Enable = 0x1,
  GraphicsUpdate_Scissor = 0x2,
  GraphicsUpdate_Viewport = 0x4,
  GraphicsUpdate_DepthRange = 0x8,
  GraphicsUpdate_ClearColor = 0x10,
  GraphicsUpdate_ClearDepth = 0x20,
  GraphicsUpdate_ClearStencil = 0x40,
  GraphicsUpdate_CullFace = 0x80,
  GraphicsUpdate_BlendFunc = 0x100,
  GraphicsUpdate_DepthFunc = 0x200,
  GraphicsUpdate_PolygonOffset = 0x400,
  GraphicsUpdate_StencilFunc = 0x800,
  GraphicsUpdate_StencilOp = 0x1000,
  GraphicsUpdate_ColorMask = 0x2000,
  GraphicsUpdate_LineWidth = 0x4000,
  GraphicsUpdate_ShaderProgram = 0x1000000,
  GraphicsUpdate_FrameBuffer = 0x2000000,
  GraphicsUpdate_VertexBuffer0 = 0x10000000,
  GraphicsUpdate_VertexBufferN = 0x20000000,
  GraphicsUpdate_VertexBuffer = 0x30000000,
  GraphicsUpdate_Texture0 = 0x40000000,
  GraphicsUpdate_TextureN = 0x80000000,
  GraphicsUpdate_Texture = 0xC0000000,
};

/* 406 */
struct GraphicsState
{
  EnableMode Enable;
  ImageRect Scissor;
  ImageRect Viewport;
  Vector2 DepthRange;
  Vector4 ClearColor;
  float ClearDepth;
  int ClearStencil;
  CullFace CullFace;
  BlendFunc BlendFuncRgb;
  BlendFunc BlendFuncAlpha;
  DepthFunc DepthFunc;
  PolygonOffset PolygonOffset;
  StencilFunc StencilFuncFront;
  StencilOp StencilOpFront;
  StencilFunc StencilFuncBack;
  StencilOp StencilOpBack;
  ColorMask ColorMask;
  float LineWidth;
};

/* 407 */
typedef void MonoArray;

/* 408 */
enum PsmError : unsigned __int32
{
  PSM_ERROR_NO_ERROR = 0x0,
  PSM_ERROR_BASE_ERROR = 0x80010000,
  PSM_ERROR_ERROR = 0x80010001,
  PSM_ERROR_OUT_OF_MEMORY = 0x80010002,
  PSM_ERROR_INVALID_PARAMETER = 0x80010003,
  PSM_ERROR_PATH_NOT_FOUND = 0x80010004,
  PSM_ERROR_PATH_ALREADY_EXISTS = 0x80010005,
  PSM_ERROR_FILE_NOT_FOUND = 0x80010006,
  PSM_ERROR_TIMEOUT = 0x80010007,
  PSM_ERROR_OUT_OF_RANGE = 0x80010008,
  PSM_ERROR_END_OF_STREAM = 0x80010009,
  PSM_ERROR_BUFFER_FULL = 0x80010010,
  PSM_ERROR_INVALID_BUFFER = 0x80010011,
  PSM_ERROR_NOT_INITIALIZED = 0x80010012,
  PSM_ERROR_ALREADY_INITIALIZED = 0x80010013,
  PSM_ERROR_NOT_AVAILABLE = 0x80010014,
  PSM_ERROR_NOT_FOUND = 0x80010015,
  PSM_ERROR_PENDING = 0x80010016,
  PSM_ERROR_ALREADY_EXISTS = 0x80010017,
  PSM_ERROR_INVALID_HANDLE = 0x80010018,
  PSM_ERROR_OUT_OF_RESOURCES = 0x80010019,
  PSM_ERROR_ACCESS_DENIED = 0x80010020,
  PSM_ERROR_NOT_SUPPORTED = 0x80010021,
  PSM_ERROR_DISK_FULL = 0x80010022,
  PSM_ERROR_SEEK_FAILED = 0x80010023,
  PSM_ERROR_INVALID_DATA = 0x80010024,
  PSM_ERROR_INVALID_CALL = 0x80010025,
  PSM_ERROR_NOT_IMPLEMENTED = 0x80010026,
  PSM_ERROR_READ_FAILED = 0x80010027,
  PSM_ERROR_WRITE_FAILED = 0x80010028,
  PSM_ERROR_BUSY = 0x80010029,
  PSM_ERROR_COMMON_ARGUMENT = 0x80580001,
  PSM_ERROR_COMMON_ARGUMENT_NULL = 0x80580002,
  PSM_ERROR_COMMON_ARGUMENT_OUT_OF_RANGE = 0x80580003,
  PSM_ERROR_COMMON_INVALID_OPERATION = 0x80580004,
  PSM_ERROR_COMMON_OBJECT_DISPOSED = 0x80580005,
  PSM_ERROR_COMMON_NOT_SUPPORTED = 0x80580006,
  PSM_ERROR_COMMON_INVALID_FORMAT = 0x80580007,
  PSM_ERROR_COMMON_INSUFFICIENT_MEMORY = 0x80580008,
  PSM_ERROR_COMMON_IO = 0x80580010,
  PSM_ERROR_COMMON_FILE_NOT_FOUND = 0x80580011,
  PSM_ERROR_COMMON_FILE_LOAD = 0x80580012,
  PSM_ERROR_COMMON_OUT_OF_MEMORY = 0x80580013,
  PSM_ERROR_GRAPHICS_SYSTEM = 0x80580021,
  PSM_ERROR_AUDIO_SYSTEM = 0x80580022,
  PSM_ERROR_IMAGE_SYSTEM = 0x80580023,
  PSM_ERROR_FONT_SYSTEM = 0x80580024,
  PSM_ERROR_INPUT_SYSTEM = 0x80580025,
  PSM_ERROR_CAMERA_SYSTEM = 0x80580027,
  PSM_ERROR_LOCATION_SYSTEM = 0x80580028,
};

/* 409 */
enum GL2enum
{
  GL_FALSE = 0x0,
  GL_POINTS = 0x0,
  GL_ZERO = 0x0,
  GL_NO_ERROR = 0x0,
  GL_NONE = 0x0,
  GL_TRUE = 0x1,
  GL_LINES = 0x1,
  GL_ONE = 0x1,
  GL_MAP_READ_BIT = 0x1,
  GL_SYNC_FLUSH_COMMANDS_BIT = 0x1,
  GL_VERTEX_SHADER_BIT = 0x1,
  GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x1,
  GL_LINE_LOOP = 0x2,
  GL_MAP_WRITE_BIT = 0x2,
  GL_FRAGMENT_SHADER_BIT = 0x2,
  GL_ELEMENT_ARRAY_BARRIER_BIT = 0x2,
  GL_CONTEXT_FLAG_DEBUG_BIT = 0x2,
  GL_LINE_STRIP = 0x3,
  GL_TRIANGLES = 0x4,
  GL_MAP_INVALIDATE_RANGE_BIT = 0x4,
  GL_UNIFORM_BARRIER_BIT = 0x4,
  GL_GEOMETRY_SHADER_BIT = 0x4,
  GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x4,
  GL_TRIANGLE_STRIP = 0x5,
  GL_TRIANGLE_FAN = 0x6,
  GL_QUADS = 0x7,
  GL_MAP_INVALIDATE_BUFFER_BIT = 0x8,
  GL_TEXTURE_FETCH_BARRIER_BIT = 0x8,
  GL_TESS_CONTROL_SHADER_BIT = 0x8,
  GL_LINES_ADJACENCY = 0xA,
  GL_LINE_STRIP_ADJACENCY = 0xB,
  GL_TRIANGLES_ADJACENCY = 0xC,
  GL_TRIANGLE_STRIP_ADJACENCY = 0xD,
  GL_PATCHES = 0xE,
  GL_MAP_FLUSH_EXPLICIT_BIT = 0x10,
  GL_TESS_EVALUATION_SHADER_BIT = 0x10,
  GL_MAP_UNSYNCHRONIZED_BIT = 0x20,
  GL_COMPUTE_SHADER_BIT = 0x20,
  GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x20,
  GL_COMMAND_BARRIER_BIT = 0x40,
  GL_PIXEL_BUFFER_BARRIER_BIT = 0x80,
  GL_DEPTH_BUFFER_BIT = 0x100,
  GL_TEXTURE_UPDATE_BARRIER_BIT = 0x100,
  GL_NEVER = 0x200,
  GL_BUFFER_UPDATE_BARRIER_BIT = 0x200,
  GL_LESS = 0x201,
  GL_EQUAL = 0x202,
  GL_LEQUAL = 0x203,
  GL_GREATER = 0x204,
  GL_NOTEQUAL = 0x205,
  GL_GEQUAL = 0x206,
  GL_ALWAYS = 0x207,
  GL_SRC_COLOR = 0x300,
  GL_ONE_MINUS_SRC_COLOR = 0x301,
  GL_SRC_ALPHA = 0x302,
  GL_ONE_MINUS_SRC_ALPHA = 0x303,
  GL_DST_ALPHA = 0x304,
  GL_ONE_MINUS_DST_ALPHA = 0x305,
  GL_DST_COLOR = 0x306,
  GL_ONE_MINUS_DST_COLOR = 0x307,
  GL_SRC_ALPHA_SATURATE = 0x308,
  GL_STENCIL_BUFFER_BIT = 0x400,
  GL_FRAMEBUFFER_BARRIER_BIT = 0x400,
  GL_FRONT = 0x404,
  GL_BACK = 0x405,
  GL_FRONT_AND_BACK = 0x408,
  GL_INVALID_ENUM = 0x500,
  GL_INVALID_VALUE = 0x501,
  GL_INVALID_OPERATION = 0x502,
  GL_STACK_OVERFLOW = 0x503,
  GL_STACK_UNDERFLOW = 0x504,
  GL_OUT_OF_MEMORY = 0x505,
  GL_INVALID_FRAMEBUFFER_OPERATION = 0x506,
  GL_CONTEXT_LOST = 0x507,
  GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x800,
  GL_CW = 0x900,
  GL_CCW = 0x901,
  GL_LINE_WIDTH = 0xB21,
  GL_CULL_FACE = 0xB44,
  GL_CULL_FACE_MODE = 0xB45,
  GL_FRONT_FACE = 0xB46,
  GL_DEPTH_RANGE = 0xB70,
  GL_DEPTH_TEST = 0xB71,
  GL_DEPTH_WRITEMASK = 0xB72,
  GL_DEPTH_CLEAR_VALUE = 0xB73,
  GL_DEPTH_FUNC = 0xB74,
  GL_STENCIL_TEST = 0xB90,
  GL_STENCIL_CLEAR_VALUE = 0xB91,
  GL_STENCIL_FUNC = 0xB92,
  GL_STENCIL_VALUE_MASK = 0xB93,
  GL_STENCIL_FAIL = 0xB94,
  GL_STENCIL_PASS_DEPTH_FAIL = 0xB95,
  GL_STENCIL_PASS_DEPTH_PASS = 0xB96,
  GL_STENCIL_REF = 0xB97,
  GL_STENCIL_WRITEMASK = 0xB98,
  GL_VIEWPORT = 0xBA2,
  GL_DITHER = 0xBD0,
  GL_BLEND = 0xBE2,
  GL_READ_BUFFER = 0xC02,
  GL_SCISSOR_BOX = 0xC10,
  GL_SCISSOR_TEST = 0xC11,
  GL_COLOR_CLEAR_VALUE = 0xC22,
  GL_COLOR_WRITEMASK = 0xC23,
  GL_UNPACK_ROW_LENGTH = 0xCF2,
  GL_UNPACK_SKIP_ROWS = 0xCF3,
  GL_UNPACK_SKIP_PIXELS = 0xCF4,
  GL_UNPACK_ALIGNMENT = 0xCF5,
  GL_PACK_ROW_LENGTH = 0xD02,
  GL_PACK_SKIP_ROWS = 0xD03,
  GL_PACK_SKIP_PIXELS = 0xD04,
  GL_PACK_ALIGNMENT = 0xD05,
  GL_MAX_TEXTURE_SIZE = 0xD33,
  GL_MAX_VIEWPORT_DIMS = 0xD3A,
  GL_SUBPIXEL_BITS = 0xD50,
  GL_RED_BITS = 0xD52,
  GL_GREEN_BITS = 0xD53,
  GL_BLUE_BITS = 0xD54,
  GL_ALPHA_BITS = 0xD55,
  GL_DEPTH_BITS = 0xD56,
  GL_STENCIL_BITS = 0xD57,
  GL_TEXTURE_2D = 0xDE1,
  GL_ATOMIC_COUNTER_BARRIER_BIT = 0x1000,
  GL_TEXTURE_WIDTH = 0x1000,
  GL_TEXTURE_HEIGHT = 0x1001,
  GL_TEXTURE_INTERNAL_FORMAT = 0x1003,
  GL_TEXTURE_BORDER_COLOR = 0x1004,
  GL_DONT_CARE = 0x1100,
  GL_FASTEST = 0x1101,
  GL_NICEST = 0x1102,
  GL_BYTE = 0x1400,
  GL_UNSIGNED_BYTE = 0x1401,
  GL_SHORT = 0x1402,
  GL_UNSIGNED_SHORT = 0x1403,
  GL_INT = 0x1404,
  GL_UNSIGNED_INT = 0x1405,
  GL_FLOAT = 0x1406,
  GL_HALF_FLOAT = 0x140B,
  GL_FIXED = 0x140C,
  GL_INVERT = 0x150A,
  GL_TEXTURE = 0x1702,
  GL_COLOR = 0x1800,
  GL_DEPTH = 0x1801,
  GL_STENCIL = 0x1802,
  GL_STENCIL_INDEX = 0x1901,
  GL_DEPTH_COMPONENT = 0x1902,
  GL_RED = 0x1903,
  GL_GREEN = 0x1904,
  GL_BLUE = 0x1905,
  GL_ALPHA = 0x1906,
  GL_RGB = 0x1907,
  GL_RGBA = 0x1908,
  GL_LUMINANCE = 0x1909,
  GL_LUMINANCE_ALPHA = 0x190A,
  GL_KEEP = 0x1E00,
  GL_REPLACE = 0x1E01,
  GL_INCR = 0x1E02,
  GL_DECR = 0x1E03,
  GL_VENDOR = 0x1F00,
  GL_RENDERER = 0x1F01,
  GL_VERSION = 0x1F02,
  GL_EXTENSIONS = 0x1F03,
  GL_SHADER_STORAGE_BARRIER_BIT = 0x2000,
  GL_NEAREST = 0x2600,
  GL_LINEAR = 0x2601,
  GL_NEAREST_MIPMAP_NEAREST = 0x2700,
  GL_LINEAR_MIPMAP_NEAREST = 0x2701,
  GL_NEAREST_MIPMAP_LINEAR = 0x2702,
  GL_LINEAR_MIPMAP_LINEAR = 0x2703,
  GL_TEXTURE_MAG_FILTER = 0x2800,
  GL_TEXTURE_MIN_FILTER = 0x2801,
  GL_TEXTURE_WRAP_S = 0x2802,
  GL_TEXTURE_WRAP_T = 0x2803,
  GL_REPEAT = 0x2901,
  GL_POLYGON_OFFSET_UNITS = 0x2A00,
  GL_COLOR_BUFFER_BIT = 0x4000,
  GL_CONSTANT_COLOR = 0x8001,
  GL_ONE_MINUS_CONSTANT_COLOR = 0x8002,
  GL_CONSTANT_ALPHA = 0x8003,
  GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004,
  GL_BLEND_COLOR = 0x8005,
  GL_FUNC_ADD = 0x8006,
  GL_MIN = 0x8007,
  GL_MAX = 0x8008,
  GL_BLEND_EQUATION = 0x8009,
  GL_BLEND_EQUATION_RGB = 0x8009,
  GL_FUNC_SUBTRACT = 0x800A,
  GL_FUNC_REVERSE_SUBTRACT = 0x800B,
  GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033,
  GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034,
  GL_POLYGON_OFFSET_FILL = 0x8037,
  GL_POLYGON_OFFSET_FACTOR = 0x8038,
  GL_RGB8 = 0x8051,
  GL_RGBA4 = 0x8056,
  GL_RGB5_A1 = 0x8057,
  GL_RGBA8 = 0x8058,
  GL_RGB10_A2 = 0x8059,
  GL_TEXTURE_RED_SIZE = 0x805C,
  GL_TEXTURE_GREEN_SIZE = 0x805D,
  GL_TEXTURE_BLUE_SIZE = 0x805E,
  GL_TEXTURE_ALPHA_SIZE = 0x805F,
  GL_TEXTURE_BINDING_2D = 0x8069,
  GL_TEXTURE_BINDING_3D = 0x806A,
  GL_UNPACK_SKIP_IMAGES = 0x806D,
  GL_UNPACK_IMAGE_HEIGHT = 0x806E,
  GL_TEXTURE_3D = 0x806F,
  GL_TEXTURE_DEPTH = 0x8071,
  GL_TEXTURE_WRAP_R = 0x8072,
  GL_MAX_3D_TEXTURE_SIZE = 0x8073,
  GL_VERTEX_ARRAY = 0x8074,
  GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E,
  GL_SAMPLE_COVERAGE = 0x80A0,
  GL_SAMPLE_BUFFERS = 0x80A8,
  GL_SAMPLES = 0x80A9,
  GL_SAMPLE_COVERAGE_VALUE = 0x80AA,
  GL_SAMPLE_COVERAGE_INVERT = 0x80AB,
  GL_BLEND_DST_RGB = 0x80C8,
  GL_BLEND_SRC_RGB = 0x80C9,
  GL_BLEND_DST_ALPHA = 0x80CA,
  GL_BLEND_SRC_ALPHA = 0x80CB,
  GL_MAX_ELEMENTS_VERTICES = 0x80E8,
  GL_MAX_ELEMENTS_INDICES = 0x80E9,
  GL_CLAMP_TO_BORDER = 0x812D,
  GL_CLAMP_TO_EDGE = 0x812F,
  GL_TEXTURE_MIN_LOD = 0x813A,
  GL_TEXTURE_MAX_LOD = 0x813B,
  GL_TEXTURE_BASE_LEVEL = 0x813C,
  GL_TEXTURE_MAX_LEVEL = 0x813D,
  GL_GENERATE_MIPMAP_HINT = 0x8192,
  GL_DEPTH_COMPONENT16 = 0x81A5,
  GL_DEPTH_COMPONENT24 = 0x81A6,
  GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210,
  GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211,
  GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212,
  GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213,
  GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214,
  GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215,
  GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216,
  GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217,
  GL_FRAMEBUFFER_DEFAULT = 0x8218,
  GL_FRAMEBUFFER_UNDEFINED = 0x8219,
  GL_DEPTH_STENCIL_ATTACHMENT = 0x821A,
  GL_MAJOR_VERSION = 0x821B,
  GL_MINOR_VERSION = 0x821C,
  GL_NUM_EXTENSIONS = 0x821D,
  GL_CONTEXT_FLAGS = 0x821E,
  GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221,
  GL_RG = 0x8227,
  GL_RG_INTEGER = 0x8228,
  GL_R8 = 0x8229,
  GL_RG8 = 0x822B,
  GL_R16F = 0x822D,
  GL_R32F = 0x822E,
  GL_RG16F = 0x822F,
  GL_RG32F = 0x8230,
  GL_R8I = 0x8231,
  GL_R8UI = 0x8232,
  GL_R16I = 0x8233,
  GL_R16UI = 0x8234,
  GL_R32I = 0x8235,
  GL_R32UI = 0x8236,
  GL_RG8I = 0x8237,
  GL_RG8UI = 0x8238,
  GL_RG16I = 0x8239,
  GL_RG16UI = 0x823A,
  GL_RG32I = 0x823B,
  GL_RG32UI = 0x823C,
  GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242,
  GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243,
  GL_DEBUG_CALLBACK_FUNCTION = 0x8244,
  GL_DEBUG_CALLBACK_USER_PARAM = 0x8245,
  GL_DEBUG_SOURCE_API = 0x8246,
  GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247,
  GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248,
  GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249,
  GL_DEBUG_SOURCE_APPLICATION = 0x824A,
  GL_DEBUG_SOURCE_OTHER = 0x824B,
  GL_DEBUG_TYPE_ERROR = 0x824C,
  GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D,
  GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E,
  GL_DEBUG_TYPE_PORTABILITY = 0x824F,
  GL_DEBUG_TYPE_PERFORMANCE = 0x8250,
  GL_DEBUG_TYPE_OTHER = 0x8251,
  GL_LOSE_CONTEXT_ON_RESET = 0x8252,
  GL_GUILTY_CONTEXT_RESET = 0x8253,
  GL_INNOCENT_CONTEXT_RESET = 0x8254,
  GL_UNKNOWN_CONTEXT_RESET = 0x8255,
  GL_RESET_NOTIFICATION_STRATEGY = 0x8256,
  GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257,
  GL_PROGRAM_SEPARABLE = 0x8258,
  GL_ACTIVE_PROGRAM = 0x8259,
  GL_PROGRAM_PIPELINE_BINDING = 0x825A,
  GL_LAYER_PROVOKING_VERTEX = 0x825E,
  GL_UNDEFINED_VERTEX = 0x8260,
  GL_NO_RESET_NOTIFICATION = 0x8261,
  GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262,
  GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263,
  GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264,
  GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265,
  GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266,
  GL_COMPUTE_WORK_GROUP_SIZE = 0x8267,
  GL_DEBUG_TYPE_MARKER = 0x8268,
  GL_DEBUG_TYPE_PUSH_GROUP = 0x8269,
  GL_DEBUG_TYPE_POP_GROUP = 0x826A,
  GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B,
  GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C,
  GL_DEBUG_GROUP_STACK_DEPTH = 0x826D,
  GL_MAX_UNIFORM_LOCATIONS = 0x826E,
  GL_VERTEX_ATTRIB_BINDING = 0x82D4,
  GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5,
  GL_VERTEX_BINDING_DIVISOR = 0x82D6,
  GL_VERTEX_BINDING_OFFSET = 0x82D7,
  GL_VERTEX_BINDING_STRIDE = 0x82D8,
  GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9,
  GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA,
  GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF,
  GL_BUFFER = 0x82E0,
  GL_SHADER = 0x82E1,
  GL_PROGRAM = 0x82E2,
  GL_QUERY = 0x82E3,
  GL_PROGRAM_PIPELINE = 0x82E4,
  GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5,
  GL_SAMPLER = 0x82E6,
  GL_MAX_LABEL_LENGTH = 0x82E8,
  GL_UNSIGNED_SHORT_5_6_5 = 0x8363,
  GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368,
  GL_MIRRORED_REPEAT = 0x8370,
  GL_ALIASED_POINT_SIZE_RANGE = 0x846D,
  GL_ALIASED_LINE_WIDTH_RANGE = 0x846E,
  GL_TEXTURE0 = 0x84C0,
  GL_TEXTURE1 = 0x84C1,
  GL_TEXTURE2 = 0x84C2,
  GL_TEXTURE3 = 0x84C3,
  GL_TEXTURE4 = 0x84C4,
  GL_TEXTURE5 = 0x84C5,
  GL_TEXTURE6 = 0x84C6,
  GL_TEXTURE7 = 0x84C7,
  GL_TEXTURE8 = 0x84C8,
  GL_TEXTURE9 = 0x84C9,
  GL_TEXTURE10 = 0x84CA,
  GL_TEXTURE11 = 0x84CB,
  GL_TEXTURE12 = 0x84CC,
  GL_TEXTURE13 = 0x84CD,
  GL_TEXTURE14 = 0x84CE,
  GL_TEXTURE15 = 0x84CF,
  GL_TEXTURE16 = 0x84D0,
  GL_TEXTURE17 = 0x84D1,
  GL_TEXTURE18 = 0x84D2,
  GL_TEXTURE19 = 0x84D3,
  GL_TEXTURE20 = 0x84D4,
  GL_TEXTURE21 = 0x84D5,
  GL_TEXTURE22 = 0x84D6,
  GL_TEXTURE23 = 0x84D7,
  GL_TEXTURE24 = 0x84D8,
  GL_TEXTURE25 = 0x84D9,
  GL_TEXTURE26 = 0x84DA,
  GL_TEXTURE27 = 0x84DB,
  GL_TEXTURE28 = 0x84DC,
  GL_TEXTURE29 = 0x84DD,
  GL_TEXTURE30 = 0x84DE,
  GL_TEXTURE31 = 0x84DF,
  GL_ACTIVE_TEXTURE = 0x84E0,
  GL_MAX_RENDERBUFFER_SIZE = 0x84E8,
  GL_DEPTH_STENCIL = 0x84F9,
  GL_UNSIGNED_INT_24_8 = 0x84FA,
  GL_MAX_TEXTURE_LOD_BIAS = 0x84FD,
  GL_INCR_WRAP = 0x8507,
  GL_DECR_WRAP = 0x8508,
  GL_TEXTURE_CUBE_MAP = 0x8513,
  GL_TEXTURE_BINDING_CUBE_MAP = 0x8514,
  GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,
  GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,
  GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,
  GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C,
  GL_VERTEX_ARRAY_BINDING = 0x85B5,
  GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622,
  GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623,
  GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624,
  GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625,
  GL_CURRENT_VERTEX_ATTRIB = 0x8626,
  GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645,
  GL_TEXTURE_COMPRESSED = 0x86A1,
  GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2,
  GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3,
  GL_PROGRAM_BINARY_LENGTH = 0x8741,
  GL_BUFFER_SIZE = 0x8764,
  GL_BUFFER_USAGE = 0x8765,
  GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE,
  GL_PROGRAM_BINARY_FORMATS = 0x87FF,
  GL_STENCIL_BACK_FUNC = 0x8800,
  GL_STENCIL_BACK_FAIL = 0x8801,
  GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802,
  GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803,
  GL_RGBA32F = 0x8814,
  GL_RGB32F = 0x8815,
  GL_RGBA16F = 0x881A,
  GL_RGB16F = 0x881B,
  GL_MAX_DRAW_BUFFERS = 0x8824,
  GL_DRAW_BUFFER0 = 0x8825,
  GL_DRAW_BUFFER1 = 0x8826,
  GL_DRAW_BUFFER2 = 0x8827,
  GL_DRAW_BUFFER3 = 0x8828,
  GL_DRAW_BUFFER4 = 0x8829,
  GL_DRAW_BUFFER5 = 0x882A,
  GL_DRAW_BUFFER6 = 0x882B,
  GL_DRAW_BUFFER7 = 0x882C,
  GL_DRAW_BUFFER8 = 0x882D,
  GL_DRAW_BUFFER9 = 0x882E,
  GL_DRAW_BUFFER10 = 0x882F,
  GL_DRAW_BUFFER11 = 0x8830,
  GL_DRAW_BUFFER12 = 0x8831,
  GL_DRAW_BUFFER13 = 0x8832,
  GL_DRAW_BUFFER14 = 0x8833,
  GL_DRAW_BUFFER15 = 0x8834,
  GL_BLEND_EQUATION_ALPHA = 0x883D,
  GL_TEXTURE_DEPTH_SIZE = 0x884A,
  GL_TEXTURE_COMPARE_MODE = 0x884C,
  GL_TEXTURE_COMPARE_FUNC = 0x884D,
  GL_COMPARE_REF_TO_TEXTURE = 0x884E,
  GL_CURRENT_QUERY = 0x8865,
  GL_QUERY_RESULT = 0x8866,
  GL_QUERY_RESULT_AVAILABLE = 0x8867,
  GL_MAX_VERTEX_ATTRIBS = 0x8869,
  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A,
  GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C,
  GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D,
  GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872,
  GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F,
  GL_ARRAY_BUFFER = 0x8892,
  GL_ELEMENT_ARRAY_BUFFER = 0x8893,
  GL_ARRAY_BUFFER_BINDING = 0x8894,
  GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895,
  GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F,
  GL_READ_ONLY = 0x88B8,
  GL_WRITE_ONLY = 0x88B9,
  GL_READ_WRITE = 0x88BA,
  GL_BUFFER_MAPPED = 0x88BC,
  GL_BUFFER_MAP_POINTER = 0x88BD,
  GL_STREAM_DRAW = 0x88E0,
  GL_STREAM_READ = 0x88E1,
  GL_STREAM_COPY = 0x88E2,
  GL_STATIC_DRAW = 0x88E4,
  GL_STATIC_READ = 0x88E5,
  GL_STATIC_COPY = 0x88E6,
  GL_DYNAMIC_DRAW = 0x88E8,
  GL_DYNAMIC_READ = 0x88E9,
  GL_DYNAMIC_COPY = 0x88EA,
  GL_PIXEL_PACK_BUFFER = 0x88EB,
  GL_PIXEL_UNPACK_BUFFER = 0x88EC,
  GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED,
  GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF,
  GL_DEPTH24_STENCIL8 = 0x88F0,
  GL_TEXTURE_STENCIL_SIZE = 0x88F1,
  GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD,
  GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE,
  GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF,
  GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904,
  GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905,
  GL_GEOMETRY_VERTICES_OUT = 0x8916,
  GL_GEOMETRY_INPUT_TYPE = 0x8917,
  GL_GEOMETRY_OUTPUT_TYPE = 0x8918,
  GL_SAMPLER_BINDING = 0x8919,
  GL_UNIFORM_BUFFER = 0x8A11,
  GL_UNIFORM_BUFFER_BINDING = 0x8A28,
  GL_UNIFORM_BUFFER_START = 0x8A29,
  GL_UNIFORM_BUFFER_SIZE = 0x8A2A,
  GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B,
  GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C,
  GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D,
  GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E,
  GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F,
  GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30,
  GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31,
  GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32,
  GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33,
  GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34,
  GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35,
  GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36,
  GL_UNIFORM_TYPE = 0x8A37,
  GL_UNIFORM_SIZE = 0x8A38,
  GL_UNIFORM_NAME_LENGTH = 0x8A39,
  GL_UNIFORM_BLOCK_INDEX = 0x8A3A,
  GL_UNIFORM_OFFSET = 0x8A3B,
  GL_UNIFORM_ARRAY_STRIDE = 0x8A3C,
  GL_UNIFORM_MATRIX_STRIDE = 0x8A3D,
  GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E,
  GL_UNIFORM_BLOCK_BINDING = 0x8A3F,
  GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40,
  GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41,
  GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42,
  GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43,
  GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44,
  GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46,
  GL_FRAGMENT_SHADER = 0x8B30,
  GL_VERTEX_SHADER = 0x8B31,
  GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49,
  GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A,
  GL_MAX_VARYING_COMPONENTS = 0x8B4B,
  GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C,
  GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D,
  GL_SHADER_TYPE = 0x8B4F,
  GL_FLOAT_VEC2 = 0x8B50,
  GL_FLOAT_VEC3 = 0x8B51,
  GL_FLOAT_VEC4 = 0x8B52,
  GL_INT_VEC2 = 0x8B53,
  GL_INT_VEC3 = 0x8B54,
  GL_INT_VEC4 = 0x8B55,
  GL_BOOL = 0x8B56,
  GL_BOOL_VEC2 = 0x8B57,
  GL_BOOL_VEC3 = 0x8B58,
  GL_BOOL_VEC4 = 0x8B59,
  GL_FLOAT_MAT2 = 0x8B5A,
  GL_FLOAT_MAT3 = 0x8B5B,
  GL_FLOAT_MAT4 = 0x8B5C,
  GL_SAMPLER_2D = 0x8B5E,
  GL_SAMPLER_3D = 0x8B5F,
  GL_SAMPLER_CUBE = 0x8B60,
  GL_SAMPLER_2D_SHADOW = 0x8B62,
  GL_FLOAT_MAT2x3 = 0x8B65,
  GL_FLOAT_MAT2x4 = 0x8B66,
  GL_FLOAT_MAT3x2 = 0x8B67,
  GL_FLOAT_MAT3x4 = 0x8B68,
  GL_FLOAT_MAT4x2 = 0x8B69,
  GL_FLOAT_MAT4x3 = 0x8B6A,
  GL_DELETE_STATUS = 0x8B80,
  GL_COMPILE_STATUS = 0x8B81,
  GL_LINK_STATUS = 0x8B82,
  GL_VALIDATE_STATUS = 0x8B83,
  GL_INFO_LOG_LENGTH = 0x8B84,
  GL_ATTACHED_SHADERS = 0x8B85,
  GL_ACTIVE_UNIFORMS = 0x8B86,
  GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87,
  GL_SHADER_SOURCE_LENGTH = 0x8B88,
  GL_ACTIVE_ATTRIBUTES = 0x8B89,
  GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A,
  GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B,
  GL_SHADING_LANGUAGE_VERSION = 0x8B8C,
  GL_CURRENT_PROGRAM = 0x8B8D,
  GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A,
  GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B,
  GL_TEXTURE_RED_TYPE = 0x8C10,
  GL_TEXTURE_GREEN_TYPE = 0x8C11,
  GL_TEXTURE_BLUE_TYPE = 0x8C12,
  GL_TEXTURE_ALPHA_TYPE = 0x8C13,
  GL_TEXTURE_DEPTH_TYPE = 0x8C16,
  GL_UNSIGNED_NORMALIZED = 0x8C17,
  GL_TEXTURE_2D_ARRAY = 0x8C1A,
  GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D,
  GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29,
  GL_TEXTURE_BUFFER = 0x8C2A,
  GL_TEXTURE_BUFFER_BINDING = 0x8C2A,
  GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B,
  GL_TEXTURE_BINDING_BUFFER = 0x8C2C,
  GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D,
  GL_ANY_SAMPLES_PASSED = 0x8C2F,
  GL_SAMPLE_SHADING = 0x8C36,
  GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37,
  GL_R11F_G11F_B10F = 0x8C3A,
  GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B,
  GL_RGB9_E5 = 0x8C3D,
  GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E,
  GL_TEXTURE_SHARED_SIZE = 0x8C3F,
  GL_SRGB = 0x8C40,
  GL_SRGB8 = 0x8C41,
  GL_SRGB8_ALPHA8 = 0x8C43,
  GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76,
  GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F,
  GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80,
  GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83,
  GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84,
  GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85,
  GL_PRIMITIVES_GENERATED = 0x8C87,
  GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88,
  GL_RASTERIZER_DISCARD = 0x8C89,
  GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A,
  GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B,
  GL_INTERLEAVED_ATTRIBS = 0x8C8C,
  GL_SEPARATE_ATTRIBS = 0x8C8D,
  GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E,
  GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F,
  GL_STENCIL_BACK_REF = 0x8CA3,
  GL_STENCIL_BACK_VALUE_MASK = 0x8CA4,
  GL_STENCIL_BACK_WRITEMASK = 0x8CA5,
  GL_FRAMEBUFFER_BINDING = 0x8CA6,
  GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6,
  GL_RENDERBUFFER_BINDING = 0x8CA7,
  GL_READ_FRAMEBUFFER = 0x8CA8,
  GL_DRAW_FRAMEBUFFER = 0x8CA9,
  GL_READ_FRAMEBUFFER_BINDING = 0x8CAA,
  GL_RENDERBUFFER_SAMPLES = 0x8CAB,
  GL_DEPTH_COMPONENT32F = 0x8CAC,
  GL_DEPTH32F_STENCIL8 = 0x8CAD,
  GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0,
  GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1,
  GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2,
  GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3,
  GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4,
  GL_FRAMEBUFFER_COMPLETE = 0x8CD5,
  GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6,
  GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7,
  GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 0x8CD9,
  GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD,
  GL_MAX_COLOR_ATTACHMENTS = 0x8CDF,
  GL_COLOR_ATTACHMENT0 = 0x8CE0,
  GL_COLOR_ATTACHMENT1 = 0x8CE1,
  GL_COLOR_ATTACHMENT2 = 0x8CE2,
  GL_COLOR_ATTACHMENT3 = 0x8CE3,
  GL_COLOR_ATTACHMENT4 = 0x8CE4,
  GL_COLOR_ATTACHMENT5 = 0x8CE5,
  GL_COLOR_ATTACHMENT6 = 0x8CE6,
  GL_COLOR_ATTACHMENT7 = 0x8CE7,
  GL_COLOR_ATTACHMENT8 = 0x8CE8,
  GL_COLOR_ATTACHMENT9 = 0x8CE9,
  GL_COLOR_ATTACHMENT10 = 0x8CEA,
  GL_COLOR_ATTACHMENT11 = 0x8CEB,
  GL_COLOR_ATTACHMENT12 = 0x8CEC,
  GL_COLOR_ATTACHMENT13 = 0x8CED,
  GL_COLOR_ATTACHMENT14 = 0x8CEE,
  GL_COLOR_ATTACHMENT15 = 0x8CEF,
  GL_COLOR_ATTACHMENT16 = 0x8CF0,
  GL_COLOR_ATTACHMENT17 = 0x8CF1,
  GL_COLOR_ATTACHMENT18 = 0x8CF2,
  GL_COLOR_ATTACHMENT19 = 0x8CF3,
  GL_COLOR_ATTACHMENT20 = 0x8CF4,
  GL_COLOR_ATTACHMENT21 = 0x8CF5,
  GL_COLOR_ATTACHMENT22 = 0x8CF6,
  GL_COLOR_ATTACHMENT23 = 0x8CF7,
  GL_COLOR_ATTACHMENT24 = 0x8CF8,
  GL_COLOR_ATTACHMENT25 = 0x8CF9,
  GL_COLOR_ATTACHMENT26 = 0x8CFA,
  GL_COLOR_ATTACHMENT27 = 0x8CFB,
  GL_COLOR_ATTACHMENT28 = 0x8CFC,
  GL_COLOR_ATTACHMENT29 = 0x8CFD,
  GL_COLOR_ATTACHMENT30 = 0x8CFE,
  GL_COLOR_ATTACHMENT31 = 0x8CFF,
  GL_DEPTH_ATTACHMENT = 0x8D00,
  GL_STENCIL_ATTACHMENT = 0x8D20,
  GL_FRAMEBUFFER = 0x8D40,
  GL_RENDERBUFFER = 0x8D41,
  GL_RENDERBUFFER_WIDTH = 0x8D42,
  GL_RENDERBUFFER_HEIGHT = 0x8D43,
  GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44,
  GL_STENCIL_INDEX8 = 0x8D48,
  GL_RENDERBUFFER_RED_SIZE = 0x8D50,
  GL_RENDERBUFFER_GREEN_SIZE = 0x8D51,
  GL_RENDERBUFFER_BLUE_SIZE = 0x8D52,
  GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53,
  GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54,
  GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55,
  GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56,
  GL_MAX_SAMPLES = 0x8D57,
  GL_RGB565 = 0x8D62,
  GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69,
  GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A,
  GL_MAX_ELEMENT_INDEX = 0x8D6B,
  GL_RGBA32UI = 0x8D70,
  GL_RGB32UI = 0x8D71,
  GL_RGBA16UI = 0x8D76,
  GL_RGB16UI = 0x8D77,
  GL_RGBA8UI = 0x8D7C,
  GL_RGB8UI = 0x8D7D,
  GL_RGBA32I = 0x8D82,
  GL_RGB32I = 0x8D83,
  GL_RGBA16I = 0x8D88,
  GL_RGB16I = 0x8D89,
  GL_RGBA8I = 0x8D8E,
  GL_RGB8I = 0x8D8F,
  GL_RED_INTEGER = 0x8D94,
  GL_RGB_INTEGER = 0x8D98,
  GL_RGBA_INTEGER = 0x8D99,
  GL_INT_2_10_10_10_REV = 0x8D9F,
  GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7,
  GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8,
  GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD,
  GL_SAMPLER_2D_ARRAY = 0x8DC1,
  GL_SAMPLER_BUFFER = 0x8DC2,
  GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4,
  GL_SAMPLER_CUBE_SHADOW = 0x8DC5,
  GL_UNSIGNED_INT_VEC2 = 0x8DC6,
  GL_UNSIGNED_INT_VEC3 = 0x8DC7,
  GL_UNSIGNED_INT_VEC4 = 0x8DC8,
  GL_INT_SAMPLER_2D = 0x8DCA,
  GL_INT_SAMPLER_3D = 0x8DCB,
  GL_INT_SAMPLER_CUBE = 0x8DCC,
  GL_INT_SAMPLER_2D_ARRAY = 0x8DCF,
  GL_INT_SAMPLER_BUFFER = 0x8DD0,
  GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2,
  GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3,
  GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4,
  GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7,
  GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8,
  GL_GEOMETRY_SHADER = 0x8DD9,
  GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF,
  GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0,
  GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1,
  GL_LOW_FLOAT = 0x8DF0,
  GL_MEDIUM_FLOAT = 0x8DF1,
  GL_HIGH_FLOAT = 0x8DF2,
  GL_LOW_INT = 0x8DF3,
  GL_MEDIUM_INT = 0x8DF4,
  GL_HIGH_INT = 0x8DF5,
  GL_SHADER_BINARY_FORMATS = 0x8DF8,
  GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9,
  GL_SHADER_COMPILER = 0x8DFA,
  GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB,
  GL_MAX_VARYING_VECTORS = 0x8DFC,
  GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD,
  GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E,
  GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F,
  GL_TRANSFORM_FEEDBACK = 0x8E22,
  GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23,
  GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24,
  GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25,
  GL_TEXTURE_SWIZZLE_R = 0x8E42,
  GL_TEXTURE_SWIZZLE_G = 0x8E43,
  GL_TEXTURE_SWIZZLE_B = 0x8E44,
  GL_TEXTURE_SWIZZLE_A = 0x8E45,
  GL_FIRST_VERTEX_CONVENTION = 0x8E4D,
  GL_LAST_VERTEX_CONVENTION = 0x8E4E,
  GL_SAMPLE_POSITION = 0x8E50,
  GL_SAMPLE_MASK = 0x8E51,
  GL_SAMPLE_MASK_VALUE = 0x8E52,
  GL_MAX_SAMPLE_MASK_WORDS = 0x8E59,
  GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A,
  GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B,
  GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C,
  GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D,
  GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E,
  GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F,
  GL_PATCH_VERTICES = 0x8E72,
  GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75,
  GL_TESS_GEN_MODE = 0x8E76,
  GL_TESS_GEN_SPACING = 0x8E77,
  GL_TESS_GEN_VERTEX_ORDER = 0x8E78,
  GL_TESS_GEN_POINT_MODE = 0x8E79,
  GL_ISOLINES = 0x8E7A,
  GL_FRACTIONAL_ODD = 0x8E7B,
  GL_FRACTIONAL_EVEN = 0x8E7C,
  GL_MAX_PATCH_VERTICES = 0x8E7D,
  GL_MAX_TESS_GEN_LEVEL = 0x8E7E,
  GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F,
  GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80,
  GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81,
  GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82,
  GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83,
  GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84,
  GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85,
  GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86,
  GL_TESS_EVALUATION_SHADER = 0x8E87,
  GL_TESS_CONTROL_SHADER = 0x8E88,
  GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89,
  GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A,
  GL_COPY_READ_BUFFER = 0x8F36,
  GL_COPY_READ_BUFFER_BINDING = 0x8F36,
  GL_COPY_WRITE_BUFFER = 0x8F37,
  GL_COPY_WRITE_BUFFER_BINDING = 0x8F37,
  GL_MAX_IMAGE_UNITS = 0x8F38,
  GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39,
  GL_IMAGE_BINDING_NAME = 0x8F3A,
  GL_IMAGE_BINDING_LEVEL = 0x8F3B,
  GL_IMAGE_BINDING_LAYERED = 0x8F3C,
  GL_IMAGE_BINDING_LAYER = 0x8F3D,
  GL_IMAGE_BINDING_ACCESS = 0x8F3E,
  GL_DRAW_INDIRECT_BUFFER = 0x8F3F,
  GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43,
  GL_VERTEX_BINDING_BUFFER = 0x8F4F,
  GL_R8_SNORM = 0x8F94,
  GL_RG8_SNORM = 0x8F95,
  GL_RGB8_SNORM = 0x8F96,
  GL_RGBA8_SNORM = 0x8F97,
  GL_SIGNED_NORMALIZED = 0x8F9C,
  GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009,
  GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A,
  GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C,
  GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D,
  GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E,
  GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F,
  GL_IMAGE_2D = 0x904D,
  GL_IMAGE_3D = 0x904E,
  GL_IMAGE_CUBE = 0x9050,
  GL_IMAGE_BUFFER = 0x9051,
  GL_IMAGE_2D_ARRAY = 0x9053,
  GL_IMAGE_CUBE_MAP_ARRAY = 0x9054,
  GL_INT_IMAGE_2D = 0x9058,
  GL_INT_IMAGE_3D = 0x9059,
  GL_INT_IMAGE_CUBE = 0x905B,
  GL_INT_IMAGE_BUFFER = 0x905C,
  GL_INT_IMAGE_2D_ARRAY = 0x905E,
  GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F,
  GL_UNSIGNED_INT_IMAGE_2D = 0x9063,
  GL_UNSIGNED_INT_IMAGE_3D = 0x9064,
  GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066,
  GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067,
  GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069,
  GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A,
  GL_IMAGE_BINDING_FORMAT = 0x906E,
  GL_RGB10_A2UI = 0x906F,
  GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7,
  GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8,
  GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9,
  GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA,
  GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB,
  GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC,
  GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD,
  GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE,
  GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF,
  GL_SHADER_STORAGE_BUFFER = 0x90D2,
  GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3,
  GL_SHADER_STORAGE_BUFFER_START = 0x90D4,
  GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5,
  GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6,
  GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7,
  GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8,
  GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9,
  GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA,
  GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB,
  GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC,
  GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD,
  GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE,
  GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF,
  GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA,
  GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB,
  GL_DISPATCH_INDIRECT_BUFFER = 0x90EE,
  GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF,
  GL_TEXTURE_2D_MULTISAMPLE = 0x9100,
  GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102,
  GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104,
  GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105,
  GL_TEXTURE_SAMPLES = 0x9106,
  GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107,
  GL_SAMPLER_2D_MULTISAMPLE = 0x9108,
  GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109,
  GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A,
  GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B,
  GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C,
  GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D,
  GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E,
  GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F,
  GL_MAX_INTEGER_SAMPLES = 0x9110,
  GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111,
  GL_OBJECT_TYPE = 0x9112,
  GL_SYNC_CONDITION = 0x9113,
  GL_SYNC_STATUS = 0x9114,
  GL_SYNC_FLAGS = 0x9115,
  GL_SYNC_FENCE = 0x9116,
  GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117,
  GL_UNSIGNALED = 0x9118,
  GL_SIGNALED = 0x9119,
  GL_ALREADY_SIGNALED = 0x911A,
  GL_TIMEOUT_EXPIRED = 0x911B,
  GL_CONDITION_SATISFIED = 0x911C,
  GL_WAIT_FAILED = 0x911D,
  GL_BUFFER_ACCESS_FLAGS = 0x911F,
  GL_BUFFER_MAP_LENGTH = 0x9120,
  GL_BUFFER_MAP_OFFSET = 0x9121,
  GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122,
  GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123,
  GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124,
  GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125,
  GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F,
  GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143,
  GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144,
  GL_DEBUG_LOGGED_MESSAGES = 0x9145,
  GL_DEBUG_SEVERITY_HIGH = 0x9146,
  GL_DEBUG_SEVERITY_MEDIUM = 0x9147,
  GL_DEBUG_SEVERITY_LOW = 0x9148,
  GL_TEXTURE_BUFFER_OFFSET = 0x919D,
  GL_TEXTURE_BUFFER_SIZE = 0x919E,
  GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F,
  GL_COMPUTE_SHADER = 0x91B9,
  GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB,
  GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC,
  GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD,
  GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE,
  GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF,
  GL_COMPRESSED_R11_EAC = 0x9270,
  GL_COMPRESSED_SIGNED_R11_EAC = 0x9271,
  GL_COMPRESSED_RG11_EAC = 0x9272,
  GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273,
  GL_COMPRESSED_RGB8_ETC2 = 0x9274,
  GL_COMPRESSED_SRGB8_ETC2 = 0x9275,
  GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276,
  GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277,
  GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278,
  GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279,
  GL_MULTIPLY = 0x9294,
  GL_SCREEN = 0x9295,
  GL_OVERLAY = 0x9296,
  GL_DARKEN = 0x9297,
  GL_LIGHTEN = 0x9298,
  GL_COLORDODGE = 0x9299,
  GL_COLORBURN = 0x929A,
  GL_HARDLIGHT = 0x929B,
  GL_SOFTLIGHT = 0x929C,
  GL_DIFFERENCE = 0x929E,
  GL_EXCLUSION = 0x92A0,
  GL_HSL_HUE = 0x92AD,
  GL_HSL_SATURATION = 0x92AE,
  GL_HSL_COLOR = 0x92AF,
  GL_HSL_LUMINOSITY = 0x92B0,
  GL_PRIMITIVE_BOUNDING_BOX = 0x92BE,
  GL_ATOMIC_COUNTER_BUFFER = 0x92C0,
  GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1,
  GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2,
  GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3,
  GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC,
  GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD,
  GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE,
  GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF,
  GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0,
  GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1,
  GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2,
  GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3,
  GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4,
  GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5,
  GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6,
  GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7,
  GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8,
  GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9,
  GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB,
  GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC,
  GL_DEBUG_OUTPUT = 0x92E0,
  GL_UNIFORM = 0x92E1,
  GL_UNIFORM_BLOCK = 0x92E2,
  GL_PROGRAM_INPUT = 0x92E3,
  GL_PROGRAM_OUTPUT = 0x92E4,
  GL_BUFFER_VARIABLE = 0x92E5,
  GL_SHADER_STORAGE_BLOCK = 0x92E6,
  GL_IS_PER_PATCH = 0x92E7,
  GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4,
  GL_ACTIVE_RESOURCES = 0x92F5,
  GL_MAX_NAME_LENGTH = 0x92F6,
  GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7,
  GL_NAME_LENGTH = 0x92F9,
  GL_TYPE = 0x92FA,
  GL_ARRAY_SIZE = 0x92FB,
  GL_OFFSET = 0x92FC,
  GL_BLOCK_INDEX = 0x92FD,
  GL_ARRAY_STRIDE = 0x92FE,
  GL_MATRIX_STRIDE = 0x92FF,
  GL_IS_ROW_MAJOR = 0x9300,
  GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301,
  GL_BUFFER_BINDING = 0x9302,
  GL_BUFFER_DATA_SIZE = 0x9303,
  GL_NUM_ACTIVE_VARIABLES = 0x9304,
  GL_ACTIVE_VARIABLES = 0x9305,
  GL_REFERENCED_BY_VERTEX_SHADER = 0x9306,
  GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307,
  GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308,
  GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309,
  GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A,
  GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B,
  GL_TOP_LEVEL_ARRAY_SIZE = 0x930C,
  GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D,
  GL_LOCATION = 0x930E,
  GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310,
  GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311,
  GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312,
  GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313,
  GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314,
  GL_MAX_FRAMEBUFFER_WIDTH = 0x9315,
  GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316,
  GL_MAX_FRAMEBUFFER_LAYERS = 0x9317,
  GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318,
  GL_NUM_SAMPLE_COUNTS = 0x9380,
  GL_MULTISAMPLE_LINE_WIDTH_RANGE = 0x9381,
  GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY = 0x9382,
  GL_COMPRESSED_RGBA_ASTC_4x4 = 0x93B0,
  GL_COMPRESSED_RGBA_ASTC_5x4 = 0x93B1,
  GL_COMPRESSED_RGBA_ASTC_5x5 = 0x93B2,
  GL_COMPRESSED_RGBA_ASTC_6x5 = 0x93B3,
  GL_COMPRESSED_RGBA_ASTC_6x6 = 0x93B4,
  GL_COMPRESSED_RGBA_ASTC_8x5 = 0x93B5,
  GL_COMPRESSED_RGBA_ASTC_8x6 = 0x93B6,
  GL_COMPRESSED_RGBA_ASTC_8x8 = 0x93B7,
  GL_COMPRESSED_RGBA_ASTC_10x5 = 0x93B8,
  GL_COMPRESSED_RGBA_ASTC_10x6 = 0x93B9,
  GL_COMPRESSED_RGBA_ASTC_10x8 = 0x93BA,
  GL_COMPRESSED_RGBA_ASTC_10x10 = 0x93BB,
  GL_COMPRESSED_RGBA_ASTC_12x10 = 0x93BC,
  GL_COMPRESSED_RGBA_ASTC_12x12 = 0x93BD,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = 0x93D0,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = 0x93D1,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = 0x93D2,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = 0x93D3,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = 0x93D4,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = 0x93D5,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = 0x93D6,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = 0x93D7,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = 0x93D8,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = 0x93D9,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = 0x93DA,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = 0x93DB,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = 0x93DC,
  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = 0x93DD,
  GL_INVALID_INDEX = 0xFFFFFFFF,
  GL_TIMEOUT_IGNORED = 0xFFFFFFFF,
  GL_ALL_SHADER_BITS = 0xFFFFFFFF,
  GL_ALL_BARRIER_BITS = 0xFFFFFFFF,
};

/* 410 */
struct PsmHandles
{
  unsigned int Shader;
  unsigned int FrameBuffer;
  unsigned int unk0;
  unsigned int unk1;
  unsigned int VertexBuffers[4];
  unsigned int Textures[4];
};

/* 411 */
enum ClearMask : unsigned __int32
{
  ClearMask_None = 0x0,
  ClearMask_Color = 0x1,
  ClearMask_Depth = 0x2,
  ClearMask_Stencil = 0x4,
  ClearMask_All = 0x7,
};

/* 412 */
struct InternalData
{
  bool QuitRequired;
  bool Restored;
  bool Minimized;
};

/* 414 */
enum ShaderUniformType : unsigned __int32
{
  None = 0x0,
  Float = 0x100,
  Float2 = 0x101,
  Float3 = 0x102,
  Float4 = 0x103,
  Float2x2 = 0x111,
  Float3x3 = 0x122,
  Float4x4 = 0x133,
  Int = 0x400,
  Int2 = 0x401,
  Int3 = 0x402,
  Int4 = 0x403,
  Bool = 0x300,
  Bool2 = 0x301,
  Bool3 = 0x302,
  Bool4 = 0x303,
  Sampler2D = 0x8001,
  SamplerCube = 0x8002,
};

/* 415 */
typedef void MonoString;

/* 416 */
enum ShaderAttributeType : unsigned __int32
{
  ShaderAttributeType_None = 0x0,
  ShaderAttributeType_Float = 0x100,
  ShaderAttributeType_Float2 = 0x101,
  ShaderAttributeType_Float3 = 0x102,
  ShaderAttributeType_Float4 = 0x103,
};

/* 417 */
struct CGXHeader
{
  int magic;
  int cgVer;
  int glesVer;
  uint32_t flags;
  int unk0;
  unsigned int unk1;
  uint32_t varientTablePtr;
  int unk2;
  int unk3;
  int unk4;
  int headerSize;
  int unk5;
  int unk6;
  int unk7;
  int totalSize;
  int unk9;
  char hash[16];
};


/* 9419 */
enum PixelBufferOption : __int32
{
  PixelBufferOption_None = 0x0,
  PixelBufferOption_Renderable = 0x1,
};

/* 9420 */
enum InternalOption : __int32
{
  InternalOption_None = 0x0,
  InternalOption_SystemResource = 0x1,
};

