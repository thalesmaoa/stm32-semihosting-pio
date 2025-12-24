Import("env")

env.Append(
    # Use the semihosted version of the syscalls
    LINKFLAGS=[
        "-Wl,--whole-archive",
        "-lrdimon_nano",
        "-Wl,--no-whole-archive"
    ],
)