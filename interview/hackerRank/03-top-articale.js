async function topArticles(limit) {
  const res = fetch(
    `https://jsonmock.hackerrank.com/api/articles?price=>0&price=<total_pages.length_limit=${limit}`
  );
  const data = await res.json;

  data.map(item=>console.log(item.title)) 
}

topArticles(10);
