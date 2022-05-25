add_executable(TestSock)

target_include_directories(TestSock
	PUBLIC
	${PROJECT_SOURCE_DIR}/include)

target_sources(TestSock
	PRIVATE
	main.cpp
	)

if(NOT TARGET spdlog)
	message(WARNING "NOT FOUND SPDLOG")
	find_package(spdlog REQUIRED)
endif()

target_link_libraries(TestSock
	PRIVATE
	spdlog::spdlog)
