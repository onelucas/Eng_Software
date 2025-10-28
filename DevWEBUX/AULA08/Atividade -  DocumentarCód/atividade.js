const imagens = [
    "https://img.freepik.com/fotos-gratis/um-gato-adoravel-a-relaxar-dentro-de-casa_23-2150692755.jpg",
    "https://img.freepik.com/fotos-gratis/um-gato-adoravel-a-relaxar-dentro-de-casa_23-2150692826.jpg",
    "https://img.freepik.com/fotos-gratis/um-gato-adoravel-a-relaxar-dentro-de-casa_23-2150692880.jpg",
  ];

  const slider = document.getElementById("slider");
  const dotsContainer = document.getElementById("dots");

  let indexAtual = 0;
  const imagensElementos = [];

  // Cria dinamicamente as imagens e os dots
  imagens.forEach((src, i) => {
    const img = document.createElement("img");
    img.src = src;
    if (i === 0) img.classList.add("active");
    slider.insertBefore(img, dotsContainer);
    imagensElementos.push(img);

    const dot = document.createElement("div");
    dot.classList.add("dot");
    if (i === 0) dot.classList.add("active");
    dot.addEventListener("click", () => mudarImagem(i));
    dotsContainer.appendChild(dot);
  });

  const dots = document.querySelectorAll(".dot");
  const btnPrev = document.getElementById("prev");
  const btnNext = document.getElementById("next");

  btnPrev.addEventListener("click", () => mudarImagem(indexAtual - 1));
  btnNext.addEventListener("click", () => mudarImagem(indexAtual + 1));

  function mudarImagem(novoIndex) {
    imagensElementos[indexAtual].classList.remove("active");
    dots[indexAtual].classList.remove("active");

    indexAtual = (novoIndex + imagens.length) % imagens.length;

    imagensElementos[indexAtual].classList.add("active");
    dots[indexAtual].classList.add("active");
  }

  setInterval(() => mudarImagem(indexAtual + 1), 4000);