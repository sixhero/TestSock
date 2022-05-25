#include <stdio.h>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

int main()
{
	printf("Test Sock\n");
	
	auto console = spdlog::stdout_color_mt("console");

	spdlog::get("console")->info("loggers Testing\n");

	return 0;
}
