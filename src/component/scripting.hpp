#pragma once

namespace scripting
{
	extern std::unordered_map<int, std::unordered_map<std::string, int>> fields_table;

	extern std::unordered_map<std::string, std::unordered_map<std::string, const char*>> script_function_table;
	extern std::unordered_map<std::string, std::vector<std::pair<std::string, const char*>>> script_function_table_sort;
	extern std::unordered_map<const char*, std::pair<std::string, std::string>> script_function_table_rev;

	extern std::unordered_map<std::string, game::BuiltinMethodDef> method_map;
	extern std::unordered_map<std::string, game::BuiltinFunctionDef> function_map;

	extern std::unordered_map<unsigned int, std::string> canonical_string_table;

	using script_function = void(*)(game::scr_entref_t);

	void on_shutdown(const std::function<void()>& callback);
}