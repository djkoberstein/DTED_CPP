project(
    'dted',
    'cpp',
    default_options : ['cpp_std=c++11'])


# Main libary
dted_inc = include_directories('.')
dted_lib = static_library('dted', 
    'src/DtedDecoder.cpp'
)
dted_dep = declare_dependency(
    link_with : dted_lib,
    include_directories : dted_inc)


# Main Tests
dted_tests = executable('dted_tests',
    'tests/catchmain.cpp',
    'tests/DtedDecoder.cpp',
    dependencies: dted_dep)
test('catch tests', dted_tests)