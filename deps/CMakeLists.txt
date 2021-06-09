# Copyright 2021 Peter Dimov
# Distributed under the Boost Software License, Version 1.0.
# https://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.14...3.20)

include(FetchContent)

set(BOOST_VERSION 1.76.0)

function(acquire_boost_library name)

  set(repo_link "https://github.com/boostorg/${name}")
  message(STATUS "Fetching ${repo_link}")

  FetchContent_Declare(boost_${name} GIT_REPOSITORY "${repo_link}" GIT_TAG boost-${BOOST_VERSION})
  FetchContent_MakeAvailable(boost_${name})

endfunction()

acquire_boost_library(system)
acquire_boost_library(config)
acquire_boost_library(winapi)
acquire_boost_library(predef)
