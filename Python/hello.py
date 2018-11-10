from sys import argv

def hello():
    if(len(argv) == 2):
        print('Hello,', argv[1])
    else:
        print(f'Hello, World!')

def main():
    hello()

if __name__ == "__main__":
    main()