// swift-tools-version:5.1

import PackageDescription

let package = Package(
    name: "MiniKeychain",
    platforms: [
        .iOS(.v9),
        .macOS(.v10_10),
        .tvOS(.v10),
        .watchOS(.v6)
    ],
    products: [
        .library(
            name: "MiniKeychain",
            targets: ["MiniKeychain"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MiniKeychain",
            dependencies: [],
            path: "MiniKeychain"
        ),
        .testTarget(
            name: "MiniKeychainTests",
            dependencies: ["MiniKeychain"],
            path: "MiniKeychainTests"
        ),
    ],
    swiftLanguageVersions: [.v5]
)
