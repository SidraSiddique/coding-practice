import time
import tracemalloc
def binary_search_iterative(data, key):
    left = 0
    right = len(data) - 1 
    while left <= right:
        middle = (left + right) // 2
        if data[middle] == key:
            return middle
        elif data[middle] < key:
            left = middle + 1
        else:
            right = middle - 1
    return -1
def binary_search_recursive(data, key, left, right):
    if left > right:
        return -1

    middle = (left + right) // 2
    if data[middle] == key:
        return middle
    elif data[middle] < key:
        return binary_search_recursive(data, key, middle + 1, right)
    else:
        return binary_search_recursive(data, key, left, middle - 1)
sorted_array = list(range(1, 20001))
search_value = 19999
tracemalloc.start()
iter_start = time.time()
iter_index = binary_search_iterative(sorted_array, search_value)
iter_end = time.time()
iter_current_mem, iter_peak_mem = tracemalloc.get_traced_memory()
tracemalloc.stop()
print("Iterative Binary Search:")
print(f"Index found: {iter_index}")
print(f"Time taken: {(iter_end - iter_start):.8f} seconds")
print(f"Peak memory usage: {iter_peak_mem / 1024:.2f} KB\n")
tracemalloc.start()
rec_start = time.time()
rec_index = binary_search_recursive(sorted_array, search_value, 0, len(sorted_array) - 1)
rec_end = time.time()
rec_current_mem, rec_peak_mem = tracemalloc.get_traced_memory()
tracemalloc.stop()
print("Recursive Binary Search:")
print(f"Index found: {rec_index}")
print(f"Time taken: {(rec_end - rec_start):.8f} seconds")
print(f"Peak memory usage: {rec_peak_mem / 1024:.2f} KB")
