def correct(s):
    character_number_relation = {
        "5": "S",
        "0": "O",
        "1": "I"
    }

    translation_table = str.maketrans(character_number_relation)
    return s.translate(translation_table)    
    
if __name__ == "__main__":
    print(correct("L0ND0N"))



