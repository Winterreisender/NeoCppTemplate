add_rules("mode.debug", "mode.release")

add_requires("boost")

target("test")
    add_packages("boost")
    set_kind("binary")
    add_files("test/*.cpp")


target("NeoCppTemplate")
    set_kind("binary")
    add_files("src/*.cpp")


