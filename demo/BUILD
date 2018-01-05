cc_library(
	name = "demo",
	srcs = ["demo.cpp"],
	deps = [
		"//example:frontend",
	],
)

cc_binary(
	name = "main_win",
	deps = [
		":demo",
		"//example:impl_win",
	],
)


cc_binary(
	name = "main_linux",
	deps = [
		":demo",
		"//example:impl_linux",
	],
)

load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")

pkg_tar(
	name = "bin-win",
	extension = "tar.gz",
	srcs = [":main_win"],
	package_dir = "/example",
	mode = "0755",
)
