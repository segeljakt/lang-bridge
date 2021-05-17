fn main() {
    cxx::Build::new()
        .bridge("src/main.rs")
        .file("../rust-cpp/demo.cc")
        .flag("-std=c++11")
        .compile("cpp-rust");

    println!("cargo:rerun-if-changed=src/main.rs");
    println!("cargo:rerun-if-changed=../rust-cpp/demo.h");
    println!("cargo:rerun-if-changed=../rust-cpp/demo.cc");
}
