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
