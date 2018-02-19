project('dted', 'cpp',
    default_options : ['cpp_std=c++11'])

dted_lib = shared_library('dted', 
    'src/UserHeaderLabel.cpp'
)

dted_tests = executable('dted_tests',
    'tests/catchmain.cpp',
    'tests/UserHeaderLabelTest.cpp',
    link_with : dted_lib
)

test('catch tests', dted_tests)