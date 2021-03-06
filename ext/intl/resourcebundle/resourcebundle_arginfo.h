/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 4bc15bffefcb91a7462dc8c66508f8d16b1c6c49 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ResourceBundle___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, locale, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, bundlename, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, fallback, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

#define arginfo_class_ResourceBundle_create arginfo_class_ResourceBundle___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ResourceBundle_get, 0, 0, 1)
	ZEND_ARG_INFO(0, index)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, fallback, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ResourceBundle_count, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ResourceBundle_getLocales, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, bundlename, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_ResourceBundle_getErrorCode arginfo_class_ResourceBundle_count

#define arginfo_class_ResourceBundle_getErrorMessage arginfo_class_ResourceBundle_count


ZEND_METHOD(ResourceBundle, __construct);
ZEND_FUNCTION(resourcebundle_create);
ZEND_FUNCTION(resourcebundle_get);
ZEND_FUNCTION(resourcebundle_count);
ZEND_FUNCTION(resourcebundle_locales);
ZEND_FUNCTION(resourcebundle_get_error_code);
ZEND_FUNCTION(resourcebundle_get_error_message);


static const zend_function_entry class_ResourceBundle_methods[] = {
	ZEND_ME(ResourceBundle, __construct, arginfo_class_ResourceBundle___construct, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(create, resourcebundle_create, arginfo_class_ResourceBundle_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME_MAPPING(get, resourcebundle_get, arginfo_class_ResourceBundle_get, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(count, resourcebundle_count, arginfo_class_ResourceBundle_count, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(getLocales, resourcebundle_locales, arginfo_class_ResourceBundle_getLocales, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME_MAPPING(getErrorCode, resourcebundle_get_error_code, arginfo_class_ResourceBundle_getErrorCode, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(getErrorMessage, resourcebundle_get_error_message, arginfo_class_ResourceBundle_getErrorMessage, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};
