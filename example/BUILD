package(default_visibility = ["//visibility:public"])

cc_library(
	name = "frontend",
	srcs = ["FrontEnd.cpp"],
	hdrs = ["FrontEnd.h"],
	deps = [":impl"],
)

cc_library(
	name = "impl",
	srcs = ["Implementation.cpp"],
	hdrs = ["Implementation.h"],
)

cc_library(
	name = "impl_linux",
	srcs = ["ImplementationLinux.cpp"],
	hdrs = ["ImplementationLinux.h"],
	deps = [":impl"],
	data = ["//data:linux_config.txt"],
)

cc_library(
	name = "impl_win",
	srcs = ["ImplementationWin.cpp"],
	hdrs = ["ImplementationWin.h"],
	deps = [":impl"],
	data = ["//data:windows_config.txt"],
)
