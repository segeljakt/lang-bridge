mod extern_foo {
    extern "C" {
        pub fn foo(x: i32) -> i32;
    }
}

fn foo(x: i32) -> i32 {
    unsafe { extern_foo::foo(x) }
}

fn main() {
    println!("foo(0) -> {}", foo(0));
}
