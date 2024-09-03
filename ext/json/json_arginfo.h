/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0ceb50047401c4b9e878c09cc518eacc274f7fff */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_json_encode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, depth, IS_LONG, 0, "512")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_decode, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, json, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, associative, _IS_BOOL, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, depth, IS_LONG, 0, "512")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_validate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, json, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, depth, IS_LONG, 0, "512")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_last_error, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_last_error_msg, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_JsonSerializable_jsonSerialize, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(json_encode);
ZEND_FUNCTION(json_decode);
ZEND_FUNCTION(json_validate);
ZEND_FUNCTION(json_last_error);
ZEND_FUNCTION(json_last_error_msg);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(json_encode, arginfo_json_encode)
	ZEND_FE(json_decode, arginfo_json_decode)
	ZEND_FE(json_validate, arginfo_json_validate)
	ZEND_FE(json_last_error, arginfo_json_last_error)
	ZEND_FE(json_last_error_msg, arginfo_json_last_error_msg)
	ZEND_FE_END
};

static const zend_function_entry class_JsonSerializable_methods[] = {
	ZEND_RAW_FENTRY("jsonSerialize", NULL, arginfo_class_JsonSerializable_jsonSerialize, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_FE_END
};

static void register_json_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("JSON_HEX_TAG", PHP_JSON_HEX_TAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_HEX_AMP", PHP_JSON_HEX_AMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_HEX_APOS", PHP_JSON_HEX_APOS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_HEX_QUOT", PHP_JSON_HEX_QUOT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_FORCE_OBJECT", PHP_JSON_FORCE_OBJECT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_NUMERIC_CHECK", PHP_JSON_NUMERIC_CHECK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_UNESCAPED_SLASHES", PHP_JSON_UNESCAPED_SLASHES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_PRETTY_PRINT", PHP_JSON_PRETTY_PRINT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_UNESCAPED_UNICODE", PHP_JSON_UNESCAPED_UNICODE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_PARTIAL_OUTPUT_ON_ERROR", PHP_JSON_PARTIAL_OUTPUT_ON_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_PRESERVE_ZERO_FRACTION", PHP_JSON_PRESERVE_ZERO_FRACTION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_UNESCAPED_LINE_TERMINATORS", PHP_JSON_UNESCAPED_LINE_TERMINATORS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_OBJECT_AS_ARRAY", PHP_JSON_OBJECT_AS_ARRAY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_BIGINT_AS_STRING", PHP_JSON_BIGINT_AS_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_INVALID_UTF8_IGNORE", PHP_JSON_INVALID_UTF8_IGNORE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_INVALID_UTF8_SUBSTITUTE", PHP_JSON_INVALID_UTF8_SUBSTITUTE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_THROW_ON_ERROR", PHP_JSON_THROW_ON_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_NONE", PHP_JSON_ERROR_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_DEPTH", PHP_JSON_ERROR_DEPTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_STATE_MISMATCH", PHP_JSON_ERROR_STATE_MISMATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_CTRL_CHAR", PHP_JSON_ERROR_CTRL_CHAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_SYNTAX", PHP_JSON_ERROR_SYNTAX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_UTF8", PHP_JSON_ERROR_UTF8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_RECURSION", PHP_JSON_ERROR_RECURSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_INF_OR_NAN", PHP_JSON_ERROR_INF_OR_NAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_UNSUPPORTED_TYPE", PHP_JSON_ERROR_UNSUPPORTED_TYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_INVALID_PROPERTY_NAME", PHP_JSON_ERROR_INVALID_PROPERTY_NAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_UTF16", PHP_JSON_ERROR_UTF16, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JSON_ERROR_NON_BACKED_ENUM", PHP_JSON_ERROR_NON_BACKED_ENUM, CONST_PERSISTENT);
}

static zend_class_entry *register_class_JsonSerializable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "JsonSerializable", class_JsonSerializable_methods);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_JsonException(zend_class_entry *class_entry_Exception)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "JsonException", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_Exception, 0);

	return class_entry;
}
