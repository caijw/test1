mod_qt5 = import('qt5')
dep_qt5 = declare_dependency(
  compile_args: ['-DQT_NO_EMIT=1'],
  dependencies: dependency('qt5', modules: ['Core'])
)

inc_mini_program = include_directories('.')

subdir('runtime')
subdir('ui')
subdir('jsapi')
subdir('runtime_components')
subdir('launcher')
subdir('app')

executable(
  'main',
  'main.cc',
  link_with: [
    lib_runtime_launcher, lib_wxlog, lib_wxconfig, lib_wxtask,
    lib_wxfsmgr,
    lib_app
  ],
  dependencies: [
    dep_threads,
    dep_qt5
  ],
  install: true,
  install_rpath: RPATH_BIN + ':' + RPATH_QT
)