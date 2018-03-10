# Documentation
doxygen = find_program('doxygen', required : false)
if not doxygen.found()
  error('MESON_SKIP_TEST doxygen not found.')
endif

cdata = configuration_data()
cdata.set('VERSION', meson.project_version())
cdata.set('TOP_SRCDIR', meson.source_root())
cdata.set('TOP_BUILDDIR', meson.build_root())
if find_program('dot', required : false).found()
  cdata.set('HAVE_DOT', 'YES')
else
  cdata.set('HAVE_DOT', 'NO')
endif

doxyfile = configure_file(input: 'Doxyfile.in',
                          output: 'Doxyfile',
                          configuration: cdata,
                          install: false)

datadir = join_paths(get_option('datadir'), 'doc', 'dted')

html_target = custom_target('dted-docs',
                            input: doxyfile,
                            output: 'html',
                            command: [doxygen, doxyfile],
                            install: true,
                            install_dir: datadir)