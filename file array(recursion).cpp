file_system = [
    ["folder1", [
        ["subfolder1", [
            ["file1.txt", None],
            ["file2.txt", None]
        ]],
        ["file3.txt", None]
    ]],
    ["folder2", [
        ["subfolder2", [
            ["file4.txt", None]
        ]]
    ]],
    ["file5.txt", None]
]
def find_file_array(tree, target_file, path=""):
    for item in tree:
        name, content = item
        current_path = f"{path}/{name}" if path else name

        if content is None:
            if name == target_file:
                return current_path 
        else:
            result = find_file_array(content, target_file, current_path)
            if result:
                return result
    return None
file_to_find = input("Enter the file name to search: ")
found_path = find_file_array(file_system, file_to_find)
if found_path:
    print(f"File found at: {found_path}")
else:
    print(f"File '{file_to_find}' not found.")
