cmake_minimum_required(VERSION 3.26)
project(c_primer_plus C)

set(CMAKE_C_STANDARD 11)

add_executable(
        c_primer_plus main.c

        chapter_1_getting_ready/listing_1_1_example_of_c_source_code.c
        chapter_1_getting_ready/listing_1_2_concrete.c

        chapter_2_introducing_c/listing_2_1_the_first_c_program.c
        chapter_2_introducing_c/listing_2_2_the_fathm_ft_c_program.c
        chapter_2_introducing_c/listing_2_3_the_two_func_c_program.c
        chapter_2_introducing_c/listing_2_4_the_nogood_c_program.c
        chapter_2_introducing_c/programming_exercises/exercise_1.c
        chapter_2_introducing_c/programming_exercises/exercise_2.c
        chapter_2_introducing_c/programming_exercises/exercise_3.c
        chapter_2_introducing_c/programming_exercises/exercise_4.c
        chapter_2_introducing_c/programming_exercises/exercise_5.c
        chapter_2_introducing_c/programming_exercises/exercise_6.c
        chapter_2_introducing_c/programming_exercises/exercise_7.c
        chapter_2_introducing_c/programming_exercises/exercise_8.c

        chapter_3_data_and_c/listing_3_1_the_platinum_c_program.c
        chapter_3_data_and_c/listing_3_2_the_print1_c_program.c
        chapter_3_data_and_c/listing_3_3_the_base_c_program.c
        chapter_3_data_and_c/listing_3_4_the_toobig_c_program.c
        chapter_3_data_and_c/listing_3_5_the_print2_c_program.c
        chapter_3_data_and_c/listing_3_6_the_charcode_c_program.c
        chapter_3_data_and_c/listing_3_7_the_altnames_c_program.c
        chapter_3_data_and_c/listing_3_8_the_showf_pt_c_program.c
        chapter_3_data_and_c/listing_3_9_the_floaterr_c_program.c
        chapter_3_data_and_c/listing_3_10_the_typesize_c_program.c
        chapter_3_data_and_c/listing_3_11_the_badcount_c_program.c
        chapter_3_data_and_c/listing_3_12_the_escape_c_program.c
        chapter_3_data_and_c/programming_exercises/exercise_1.c
        chapter_3_data_and_c/programming_exercises/exercise_2.c
        chapter_3_data_and_c/programming_exercises/exercise_3.c
        chapter_3_data_and_c/programming_exercises/exercise_4.c
        chapter_3_data_and_c/programming_exercises/exercise_5.c
        chapter_3_data_and_c/programming_exercises/exercise_6.c
        chapter_3_data_and_c/programming_exercises/exercise_7.c
        chapter_3_data_and_c/programming_exercises/exercise_8.c
)
