cmake_minimum_required(VERSION 3.26)
project(c_primer_plus C)

set(CMAKE_C_STANDARD 11)

add_executable(c_primer_plus main.c
        chapter_1_getting_ready/listing_1_1_example_of_c_source_code.c
        "chapter_1_getting_ready/listing_1_2_concrete.c")
