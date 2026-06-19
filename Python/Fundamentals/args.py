# understanding args

API_KEY = "value_api_key"
BASE_URL = "https://example.com"

def ejemplo_args(api_key, *args):
    print(f"\n\napi_key: {api_key}")
    print(f"args: {args}")
    print(f"{type(args)}\n\n")


def suma_valores(*args):
    return sum(args)

# ejemplo_args("API_KEY_VALUE", "HOLA", "MUNDO")
# ejemplo_args("API_KEY_VALUE2", "HOLA2", "MUNDO2")
# print(suma_valores(1,2,3,4,5,6))

## understanding kwargs

def ejemplo_kwargs(**kwargs):
    print(f"\n\nkwargs: {type(kwargs)}")
    print(f"kwargs: {kwargs}")
    print(f"kwargs: {type(kwargs)}\n\n")


ejemplo_kwargs(
    api_key="DEMO",
    query="Noticias de Python",
    timeout=30,
    retries=3,
)

ejemplo_kwargs(
    api_key="DEMO_GUARDIAN",
    section="Sports",
    from_date="2020-10-20",
    timeout=30,
    retries=3,
)
