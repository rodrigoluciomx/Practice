# understanding args


def newapi_client(api_key, query, timeout=20, retries=3):
    return f"NewsAPI: {query} con timeout {timeout}"


def guardian_client(api_key, section, from_date, timeout=30, retries=3):
    return f"Guardin {section} desde {from_date} con timeout {timeout}"

def ejemplo_args(*args):
    print(f"args: {args}")
    print(f"{type(args)}")

ejemplo_args("API_KEY_VALUE", "HOLA", "MUNDO")