package(default_visibility = ["//visibility:public"])

cc_library(
	name = "frontend",
	srcs = ["FrontEnd.cpp"],
	hdrs = ["FrontEnd.h"],
	deps = [":impl"],
)

cc_library(
	name = "impl",
	srcs = ["Implementation.cpp"] + select({
		"@bazel_tools//src/conditions:windows": ["ImplementationWin.cpp"],
#		"@bazel_tools//src/conditions:darwin": ["ImplementationMacOS.cpp"],
		"//conditions:default": ["ImplementationLinux.cpp"],
	}),
	hdrs = ["Implementation.h"] + select({
		"@bazel_tools//src/conditions:windows": ["ImplementationWin.h"],
#		"@bazel_tools//src/conditions:darwin": ["ImplementationMacOS.h"],
		"//conditions:default": ["ImplementationLinux.h"],
	}),
	data = select({
		"@bazel_tools//src/conditions:windows": ["//data:windows_config.txt"],
#		"@bazel_tools//src/conditions:darwin": ["//data:MacOS_config.txt"],
		"//conditions:default": ["//data:linux_config.txt"],
	}),
)
