import json
import urllib.request
import urllib.parse

API_KEY = "value_api_key"
BASE_URL = "https://example.com"


def newapi_client(api_key, query, timeout=30, retries=3):
    query_string = urllib.parse.urlencode({"q": query, "apiKey": api_key})
    url = f"{BASE_URL}?{query_string}"

    with urllib.request.urlopen(url, timeout=timeout) as response:
        data = response.read().decode("utf-8")
        return json.loads(data)
    return f"NewsAPI: {query} con timeout {timeout}"


def guardian_client(api_key, section, from_date, timeout=30, retries=3):
    return f"Guardin {section} desde {from_date} con timeout {timeout}"


def fetch_news(api_name, *args, **kwargs):
    """
    Función flexible para conectar con la API
    """
    base_config = {
        "timeout": 30,
        "retries": 3,
    }

    config = {
        **base_config,  # copiando dinámicamente los valores
        **kwargs,
    }

    api_clients = {
        "newapi": newapi_client,
        "guardian": guardian_client,
    }

    client = api_clients[api_name]
    return client(*args, **config)


fetch_news("newapi", api_key=API_KEY, query="Python")


def main():
    response_data = fetch_news("newapi", api_key=API_KEY, query="Python")
    for article in response_data["articles"]:
        print(article)


if __name__ == "__main__":
    main()
