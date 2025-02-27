#pragma once

#include <json/json.hpp>

#include <cppack/exception.hpp>



class InvalidJsonObjectFormat : public CPPackException
{
public:
	using CPPackException::CPPackException;


	static void throwIfJsonKeyDoesNotExist(const json& jsonData, const std::string& key);

	static void throwIfJsonValueIsNotOfType(const json& jsonData, const std::string& property, json::value_t type);
	static void throwIfJsonValueIsNotOfType(const json& jsonData, size_t index, json::value_t type, const std::string& parentKey = "");

	static void throwIfJsonValueIsNotAnArrayOfType(const json& jsonData, const std::string& property, json::value_t type);
};
