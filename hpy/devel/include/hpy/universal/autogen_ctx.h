
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.ctx.autogen_ctx_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

struct _HPyContext_s {
    const char *name; // used just to make debugging and testing easier
    void *_private;   // used by implementations to store custom data
    int ctx_version;
    HPy h_None;
    HPy h_True;
    HPy h_False;
    HPy h_NotImplemented;
    HPy h_Ellipsis;
    HPy h_BaseException;
    HPy h_Exception;
    HPy h_StopAsyncIteration;
    HPy h_StopIteration;
    HPy h_GeneratorExit;
    HPy h_ArithmeticError;
    HPy h_LookupError;
    HPy h_AssertionError;
    HPy h_AttributeError;
    HPy h_BufferError;
    HPy h_EOFError;
    HPy h_FloatingPointError;
    HPy h_OSError;
    HPy h_ImportError;
    HPy h_ModuleNotFoundError;
    HPy h_IndexError;
    HPy h_KeyError;
    HPy h_KeyboardInterrupt;
    HPy h_MemoryError;
    HPy h_NameError;
    HPy h_OverflowError;
    HPy h_RuntimeError;
    HPy h_RecursionError;
    HPy h_NotImplementedError;
    HPy h_SyntaxError;
    HPy h_IndentationError;
    HPy h_TabError;
    HPy h_ReferenceError;
    HPy h_SystemError;
    HPy h_SystemExit;
    HPy h_TypeError;
    HPy h_UnboundLocalError;
    HPy h_UnicodeError;
    HPy h_UnicodeEncodeError;
    HPy h_UnicodeDecodeError;
    HPy h_UnicodeTranslateError;
    HPy h_ValueError;
    HPy h_ZeroDivisionError;
    HPy h_BlockingIOError;
    HPy h_BrokenPipeError;
    HPy h_ChildProcessError;
    HPy h_ConnectionError;
    HPy h_ConnectionAbortedError;
    HPy h_ConnectionRefusedError;
    HPy h_ConnectionResetError;
    HPy h_FileExistsError;
    HPy h_FileNotFoundError;
    HPy h_InterruptedError;
    HPy h_IsADirectoryError;
    HPy h_NotADirectoryError;
    HPy h_PermissionError;
    HPy h_ProcessLookupError;
    HPy h_TimeoutError;
    HPy h_Warning;
    HPy h_UserWarning;
    HPy h_DeprecationWarning;
    HPy h_PendingDeprecationWarning;
    HPy h_SyntaxWarning;
    HPy h_RuntimeWarning;
    HPy h_FutureWarning;
    HPy h_ImportWarning;
    HPy h_UnicodeWarning;
    HPy h_BytesWarning;
    HPy h_ResourceWarning;
    HPy h_BaseObjectType;
    HPy h_TypeType;
    HPy h_BoolType;
    HPy h_LongType;
    HPy h_FloatType;
    HPy h_UnicodeType;
    HPy h_TupleType;
    HPy h_ListType;
    HPy (*ctx_Module_Create)(HPyContext *ctx, HPyModuleDef *def);
    HPy (*ctx_Dup)(HPyContext *ctx, HPy h);
    void (*ctx_Close)(HPyContext *ctx, HPy h);
    HPy (*ctx_Long_FromLong)(HPyContext *ctx, long value);
    HPy (*ctx_Long_FromUnsignedLong)(HPyContext *ctx, unsigned long value);
    HPy (*ctx_Long_FromLongLong)(HPyContext *ctx, long long v);
    HPy (*ctx_Long_FromUnsignedLongLong)(HPyContext *ctx, unsigned long long v);
    HPy (*ctx_Long_FromSize_t)(HPyContext *ctx, size_t value);
    HPy (*ctx_Long_FromSsize_t)(HPyContext *ctx, HPy_ssize_t value);
    long (*ctx_Long_AsLong)(HPyContext *ctx, HPy h);
    unsigned long (*ctx_Long_AsUnsignedLong)(HPyContext *ctx, HPy h);
    unsigned long (*ctx_Long_AsUnsignedLongMask)(HPyContext *ctx, HPy h);
    long long (*ctx_Long_AsLongLong)(HPyContext *ctx, HPy h);
    unsigned long long (*ctx_Long_AsUnsignedLongLong)(HPyContext *ctx, HPy h);
    unsigned long long (*ctx_Long_AsUnsignedLongLongMask)(HPyContext *ctx, HPy h);
    size_t (*ctx_Long_AsSize_t)(HPyContext *ctx, HPy h);
    HPy_ssize_t (*ctx_Long_AsSsize_t)(HPyContext *ctx, HPy h);
    void *(*ctx_Long_AsVoidPtr)(HPyContext *ctx, HPy h);
    double (*ctx_Long_AsDouble)(HPyContext *ctx, HPy h);
    HPy (*ctx_Float_FromDouble)(HPyContext *ctx, double v);
    double (*ctx_Float_AsDouble)(HPyContext *ctx, HPy h);
    HPy (*ctx_Bool_FromLong)(HPyContext *ctx, long v);
    HPy_ssize_t (*ctx_Length)(HPyContext *ctx, HPy h);
    int (*ctx_Number_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_Add)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Subtract)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Multiply)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_MatrixMultiply)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_FloorDivide)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_TrueDivide)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Remainder)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Divmod)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Power)(HPyContext *ctx, HPy h1, HPy h2, HPy h3);
    HPy (*ctx_Negative)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Positive)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Absolute)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Invert)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Lshift)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Rshift)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_And)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Xor)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Or)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_Index)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Long)(HPyContext *ctx, HPy h1);
    HPy (*ctx_Float)(HPyContext *ctx, HPy h1);
    HPy (*ctx_InPlaceAdd)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceSubtract)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceMultiply)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceMatrixMultiply)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceFloorDivide)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceTrueDivide)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceRemainder)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlacePower)(HPyContext *ctx, HPy h1, HPy h2, HPy h3);
    HPy (*ctx_InPlaceLshift)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceRshift)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceAnd)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceXor)(HPyContext *ctx, HPy h1, HPy h2);
    HPy (*ctx_InPlaceOr)(HPyContext *ctx, HPy h1, HPy h2);
    int (*ctx_Callable_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_CallTupleDict)(HPyContext *ctx, HPy callable, HPy args, HPy kw);
    void (*ctx_FatalError)(HPyContext *ctx, const char *message);
    void (*ctx_Err_SetString)(HPyContext *ctx, HPy h_type, const char *message);
    void (*ctx_Err_SetObject)(HPyContext *ctx, HPy h_type, HPy h_value);
    HPy (*ctx_Err_SetFromErrnoWithFilename)(HPyContext *ctx, HPy h_type, const char *filename_fsencoded);
    HPy (*ctx_Err_SetFromErrnoWithFilenameObjects)(HPyContext *ctx, HPy h_type, HPy filename1, HPy filename2);
    int (*ctx_Err_Occurred)(HPyContext *ctx);
    int (*ctx_Err_ExceptionMatches)(HPyContext *ctx, HPy exc);
    HPy (*ctx_Err_NoMemory)(HPyContext *ctx);
    void (*ctx_Err_Clear)(HPyContext *ctx);
    HPy (*ctx_Err_NewException)(HPyContext *ctx, const char *name, HPy base, HPy dict);
    HPy (*ctx_Err_NewExceptionWithDoc)(HPyContext *ctx, const char *name, const char *doc, HPy base, HPy dict);
    int (*ctx_Err_WarnEx)(HPyContext *ctx, HPy category, const char *message, HPy_ssize_t stack_level);
    void (*ctx_Err_WriteUnraisable)(HPyContext *ctx, HPy obj);
    int (*ctx_IsTrue)(HPyContext *ctx, HPy h);
    HPy (*ctx_Type_FromSpec)(HPyContext *ctx, HPyType_Spec *spec, HPyType_SpecParam *params);
    HPy (*ctx_Type_GenericNew)(HPyContext *ctx, HPy type, HPy *args, HPy_ssize_t nargs, HPy kw);
    HPy (*ctx_GetAttr)(HPyContext *ctx, HPy obj, HPy name);
    HPy (*ctx_GetAttr_s)(HPyContext *ctx, HPy obj, const char *name);
    int (*ctx_HasAttr)(HPyContext *ctx, HPy obj, HPy name);
    int (*ctx_HasAttr_s)(HPyContext *ctx, HPy obj, const char *name);
    int (*ctx_SetAttr)(HPyContext *ctx, HPy obj, HPy name, HPy value);
    int (*ctx_SetAttr_s)(HPyContext *ctx, HPy obj, const char *name, HPy value);
    HPy (*ctx_GetItem)(HPyContext *ctx, HPy obj, HPy key);
    HPy (*ctx_GetItem_i)(HPyContext *ctx, HPy obj, HPy_ssize_t idx);
    HPy (*ctx_GetItem_s)(HPyContext *ctx, HPy obj, const char *key);
    int (*ctx_Contains)(HPyContext *ctx, HPy container, HPy key);
    int (*ctx_SetItem)(HPyContext *ctx, HPy obj, HPy key, HPy value);
    int (*ctx_SetItem_i)(HPyContext *ctx, HPy obj, HPy_ssize_t idx, HPy value);
    int (*ctx_SetItem_s)(HPyContext *ctx, HPy obj, const char *key, HPy value);
    HPy (*ctx_Type)(HPyContext *ctx, HPy obj);
    int (*ctx_TypeCheck)(HPyContext *ctx, HPy obj, HPy type);
    int (*ctx_Is)(HPyContext *ctx, HPy obj, HPy other);
    void *(*ctx_AsStruct)(HPyContext *ctx, HPy h);
    void *(*ctx_AsStructLegacy)(HPyContext *ctx, HPy h);
    HPy (*ctx_New)(HPyContext *ctx, HPy h_type, void **data);
    HPy (*ctx_Repr)(HPyContext *ctx, HPy obj);
    HPy (*ctx_Str)(HPyContext *ctx, HPy obj);
    HPy (*ctx_ASCII)(HPyContext *ctx, HPy obj);
    HPy (*ctx_Bytes)(HPyContext *ctx, HPy obj);
    HPy (*ctx_RichCompare)(HPyContext *ctx, HPy v, HPy w, int op);
    int (*ctx_RichCompareBool)(HPyContext *ctx, HPy v, HPy w, int op);
    HPy_hash_t (*ctx_Hash)(HPyContext *ctx, HPy obj);
    int (*ctx_Bytes_Check)(HPyContext *ctx, HPy h);
    HPy_ssize_t (*ctx_Bytes_Size)(HPyContext *ctx, HPy h);
    HPy_ssize_t (*ctx_Bytes_GET_SIZE)(HPyContext *ctx, HPy h);
    char *(*ctx_Bytes_AsString)(HPyContext *ctx, HPy h);
    char *(*ctx_Bytes_AS_STRING)(HPyContext *ctx, HPy h);
    HPy (*ctx_Bytes_FromString)(HPyContext *ctx, const char *v);
    HPy (*ctx_Bytes_FromStringAndSize)(HPyContext *ctx, const char *v, HPy_ssize_t len);
    HPy (*ctx_Unicode_FromString)(HPyContext *ctx, const char *utf8);
    int (*ctx_Unicode_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_Unicode_AsUTF8String)(HPyContext *ctx, HPy h);
    const char *(*ctx_Unicode_AsUTF8AndSize)(HPyContext *ctx, HPy h, HPy_ssize_t *size);
    HPy (*ctx_Unicode_FromWideChar)(HPyContext *ctx, const wchar_t *w, HPy_ssize_t size);
    HPy (*ctx_Unicode_DecodeFSDefault)(HPyContext *ctx, const char *v);
    HPy (*ctx_Unicode_DecodeFSDefaultAndSize)(HPyContext *ctx, const char *v, HPy_ssize_t size);
    int (*ctx_List_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_List_New)(HPyContext *ctx, HPy_ssize_t len);
    int (*ctx_List_Append)(HPyContext *ctx, HPy h_list, HPy h_item);
    int (*ctx_Dict_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_Dict_New)(HPyContext *ctx);
    int (*ctx_Tuple_Check)(HPyContext *ctx, HPy h);
    HPy (*ctx_Tuple_FromArray)(HPyContext *ctx, HPy items[], HPy_ssize_t n);
    HPy (*ctx_Import_ImportModule)(HPyContext *ctx, const char *name);
    HPy (*ctx_FromPyObject)(HPyContext *ctx, cpy_PyObject *obj);
    cpy_PyObject *(*ctx_AsPyObject)(HPyContext *ctx, HPy h);
    void (*ctx_CallRealFunctionFromTrampoline)(HPyContext *ctx, HPyFunc_Signature sig, HPyCFunction func, void *args);
    HPyListBuilder (*ctx_ListBuilder_New)(HPyContext *ctx, HPy_ssize_t initial_size);
    void (*ctx_ListBuilder_Set)(HPyContext *ctx, HPyListBuilder builder, HPy_ssize_t index, HPy h_item);
    HPy (*ctx_ListBuilder_Build)(HPyContext *ctx, HPyListBuilder builder);
    void (*ctx_ListBuilder_Cancel)(HPyContext *ctx, HPyListBuilder builder);
    HPyTupleBuilder (*ctx_TupleBuilder_New)(HPyContext *ctx, HPy_ssize_t initial_size);
    void (*ctx_TupleBuilder_Set)(HPyContext *ctx, HPyTupleBuilder builder, HPy_ssize_t index, HPy h_item);
    HPy (*ctx_TupleBuilder_Build)(HPyContext *ctx, HPyTupleBuilder builder);
    void (*ctx_TupleBuilder_Cancel)(HPyContext *ctx, HPyTupleBuilder builder);
    HPyTracker (*ctx_Tracker_New)(HPyContext *ctx, HPy_ssize_t size);
    int (*ctx_Tracker_Add)(HPyContext *ctx, HPyTracker ht, HPy h);
    void (*ctx_Tracker_ForgetAll)(HPyContext *ctx, HPyTracker ht);
    void (*ctx_Tracker_Close)(HPyContext *ctx, HPyTracker ht);
    void (*ctx_Field_Store)(HPyContext *ctx, HPy target_object, HPyField *target_field, HPy h);
    HPy (*ctx_Field_Load)(HPyContext *ctx, HPy source_object, HPyField source_field);
    void (*ctx_Dump)(HPyContext *ctx, HPy h);
};
