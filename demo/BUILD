cc_library(
	name = "demo",
	srcs = ["demo.cpp"],
	deps = [
		"//example:frontend",
	],
)

cc_binary(
	name = "main",
	deps = [
		":demo",
		"//example:impl",
	],
)

load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")

pkg_tar(
	name = "bin",
	extension = "tar.gz",
	deps = [":main"],
	package_dir = "/example",
	mode = "0755",
)
