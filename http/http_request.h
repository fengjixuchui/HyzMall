#pragma once
#include "base\http_code.h"
#include "json\json.hpp"
#include <http\base\internal_request.h>
#include <http\base\internal_manager.h>

#define _DEBUG_ACTIVE 1

namespace http {
	using json_var = nlohmann::json;

	class http_request
	{
	public:
		http_request();
		static http_request* get();
		
		std::string post_request(std::string file, std::string content, uint32_t& ec, uint32_t max_tries = 10);
		std::string post_request_file(std::string file, std::string content, std::string file_name, uint32_t& ec, uint32_t max_tries = 10);
		
		json_var get_basic_body();
		
		internal_ptr create_request(std::string sub_path);
		internal_ptr create_request_file(std::string sub_path);
	};
}



