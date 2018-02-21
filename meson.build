project(
    'dted',
    'cpp',
    default_options : ['cpp_std=c++11'])


# Main libary
dted_inc = include_directories('src')
dted_lib = static_library('dted', 
    'src/usgs/dted/decoder.cpp',
    include_directories : dted_inc)
dted_dep = declare_dependency(
    link_with : dted_lib,
    include_directories : dted_inc)


# Main Tests
dted_tests = executable('dted_tests',
    'tests/catchmain.cpp',
    'tests/usgs/dted/decoder.cpp',
    dependencies: dted_dep)
test('catch tests', dted_tests)