class StringModify:

    def __init__(self, string):
        self.string = string

    def spliceString(self):
        spliced = self.string.split(", ")
        str_ = ""
        for i in spliced:
            str_ += i
            str_ += ','
        str_ = str_[:-1]
        return str_

def main():
    sliced_string = StringModify("164, 139, 164, 115, 94, 114, 127, 126, 168, 159, 240, 216, 199, 201, 244, 103, 115, 94, 231, 127, 201, 163, 174, 204, 211, 177, 181, 123, 144, 87, 226, 81, 171, 118, 209, 223, 209, 146, 159, 78, 157, 179, 185, 164, 76, 200, 100, 168, 226, 185, 230, 130, 174, 206, 87, 170, 150, 168, 238, 87, 179, 143, 165, 196, 78, 106, 204, 163, 76, 236, 247, 104, 209, 159, 164, 159, 177, 249, 111, 179, 96, 139, 173, 120, 239, 96, 210, 99, 195, 209, 98, 155, 235, 102, 196, 245, 217, 194, 235, 92, 84, 150, 199, 224, 104, 174, 91, 141, 76, 227, 226, 96, 138, 225, 204, 150, 158, 173, 244, 234, 219, 117, 87, 234, 225, 240, 227, 235, 213, 188, 212, 175, 134, 222, 81, 230, 232, 133, 223, 107, 207, 197, 126, 104, 248, 181, 152, 120, 104, 79, 238")
    modified_string = sliced_string.spliceString()
    print(modified_string)

main()