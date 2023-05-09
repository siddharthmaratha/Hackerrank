import textwrap

def wrap(string, max_width):
    wrapp = textwrap.TextWrapper(width=max_width)
    wrapped = wrapp.wrap(text=string)
    
    return "\n".join(wrapped)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)