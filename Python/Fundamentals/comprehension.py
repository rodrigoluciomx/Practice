sample_articles = [
    {
        "title": "Python logra nuevo éxito",
        "source": {"name": "TechNews"},
        "description": "Gran noticia",
        "category": "Tecnología",
    },
    {
        "title": "Mercado en crisis",
        "source": {"name": "Finance"},
        "description": "Análisis completo",
        "category": "Economía",
    },
    {
        "title": "Nueva tecnología",
        "source": {"name": "TechNews"},
        "description": "Innovación",
        "category": "Tecnología",
    },
    {
        "title": "Deportes hoy",
        "source": {"name": "Sports"},
        "description": "Resultados",
        "category": "Deportes",
    },
    {
        "title": "Política actual",
        "source": {"name": "News"},
        "description": "Actualidad",
        "category": "Política",
    },
    {
        "title": "Ciencia avanza",
        "source": {"name": "Science"},
        "description": "Descubrimientos",
        "category": "Ciencia",
    },
]


def extract_titles_traditional(sample_articles):
    titles = []
    for article in sample_articles:
        if len(article["title"]) > 10:
            titles.append(article["title"])
    return titles


def extract_titles_list(sample_articles):
    return [
        article["title"] for article in sample_articles if len(article["title"]) > 10
    ]

def extract_titles_dict(sample_articles):
    return [
        article["title"] for article in sample_articles if len(article["title"]) > 10
    ]

def extract_titles_set(sample_articles):
    return {
        article["title"] for article in sample_articles if len(article["title"]) > 10
    }

print(extract_titles_traditional(sample_articles))
print("-------------------")
print(extract_titles_list(sample_articles))