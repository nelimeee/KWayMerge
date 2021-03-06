#ifndef INCLUDE_DETAIL_GET_CONTAINER_SIZE_H_
#define INCLUDE_DETAIL_GET_CONTAINER_SIZE_H_

#include <cstdint>
#include <forward_list>

namespace detail {

template <typename Container>
std::size_t get_container_size(Container const & container) noexcept {
    return container.size();
}

template <typename T>
std::size_t get_container_size(std::forward_list<T> const & container) noexcept {
    return static_cast<std::size_t>(std::distance(container.begin(), container.end()));
}

}

#endif  // INCLUDE_DETAIL_GET_CONTAINER_SIZE_H_
