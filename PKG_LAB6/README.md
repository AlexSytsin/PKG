# Документация разработчика

## Название программы

**PKG_LAB6** — приложение для построения и визуализации трехмерного объекта, выполнения трехмерных преобразований и построения ортографических проекций.

---

## Область применения

Программа предназначена для изучения и практического освоения методов и алгоритмов трехмерной графики, включая построение каркасных моделей, выполнение трехмерных преобразований (масштабирование, перенос, вращение) и построение ортографических проекций.

---

## Назначение программы

- Построение каркасной трехмерной модели заданной буквы (первая буква фамилии).
- Реализация трехмерных преобразований: масштабирование, перенос, вращение вокруг осей.
- Построение трех ортографических проекций:
  - На плоскость Oxy.
  - На плоскость Oxz.
  - На плоскость Oyz.

---

## Функциональные возможности

1. **Построение каркасной модели трехмерного объекта**:
   - Трехмерная буква "B" визуализируется с использованием библиотеки Three.js.
2. **Трехмерные преобразования**:
   - Масштабирование.
   - Перенос по осям X, Y, Z.
   - Вращение вокруг осей X, Y, Z.
   - Отображение изменений в реальном времени.
3. **Построение ортографических проекций**:
   - Построение проекций объекта на плоскости Oxy, Oxz и Oyz.
   - Использование ортографических камер для визуализации.
4. **Графический интерфейс**:
   - Встроенные элементы управления для настройки параметров трехмерного объекта (GUI с использованием библиотеки dat.GUI).
   - Управление камерой (поворот, масштабирование) через мышь с помощью OrbitControls.
5. **Реакция на изменение размера окна**:
   - Адаптивное изменение размеров холста при изменении размеров окна браузера.

---

## Описание программы

### Структура программы

1. **Основной трехмерный рендер**:
   - Используется `THREE.WebGLRenderer` для отрисовки сцены на холсте `mainCanvas`.
   - Камера: перспективная (`THREE.PerspectiveCamera`), позволяет интерактивно вращать и масштабировать сцену.
   - Свет: добавляются источники `AmbientLight` и `PointLight`.

2. **Построение трехмерного объекта**:
   - Загружается шрифт (`helvetiker_regular.typeface.json`) с помощью `THREE.FontLoader`.
   - Геометрия буквы "B" создается с использованием `THREE.TextGeometry`.
   - Визуализация каркасной модели (`wireframe`) с помощью `THREE.MeshBasicMaterial`.

3. **Трехмерные преобразования**:
   - Масштабирование (`scale`): изменяет размеры объекта по всем осям.
   - Перенос (`translateX`, `translateY`, `translateZ`): перемещение объекта вдоль осей X, Y, Z.
   - Вращение (`rotateX`, `rotateY`, `rotateZ`): поворот объекта вокруг соответствующих осей.
   - Параметры преобразований задаются через GUI (dat.GUI).

4. **Ортографические проекции**:
   - Создаются три сцены с ортографическими камерами (`THREE.OrthographicCamera`) для проекций на плоскости Oxy, Oxz и Oyz.
   - Каждая проекция визуализируется на отдельном холсте (`projOxy`, `projOxz`, `projOyz`).

5. **Обновление изображения**:
   - Основной рендер и проекции обновляются в функциях `animate()` и `updateTransform()`.

---

### Используемые библиотеки

- **[Three.js](https://threejs.org/)**: библиотека для работы с трехмерной графикой.
- **[OrbitControls](https://threejs.org/docs/#examples/en/controls/OrbitControls)**: модуль для управления камерой.
- **[dat.GUI](https://github.com/dataarts/dat.gui)**: инструмент для создания интерфейса управления параметрами.

---

### Логические структуры данных

- **Трехмерная модель**:
  - Создается с использованием массива вершин и ребер, задающих каркасную модель буквы.
  - Материал: каркасная модель (`wireframe`).
- **Параметры преобразований**:
  - Объект `transformParams` содержит параметры масштабирования, переноса и вращения.
  - Преобразования обновляются функцией `updateTransform()`.

---

## Взаимодействие с пользователем

1. **Управление камерой**:
   - Вращение: левая кнопка мыши.
   - Масштабирование: колесо мыши.
   - Перемещение: правая кнопка мыши.
2. **Управление параметрами объекта**:
   - Масштабирование, перенос и вращение настраиваются с помощью GUI (справа от окна рендера).
   - Параметры обновляются в реальном времени.
3. **Просмотр ортографических проекций**:
   - Три проекции отображаются в отдельных холстах: Oxy, Oxz, Oyz.
4. **Адаптивный интерфейс**:
   - Холсты автоматически подстраиваются под размеры окна.

---

## Инструкция по установке и запуску

### Требования

- Современный веб-браузер с поддержкой WebGL (например, Google Chrome, Mozilla Firefox).
- Подключение к интернету для загрузки библиотек Three.js, OrbitControls и dat.GUI.

### Установка

1. Сохраните HTML-код программы в файл `index.html`.
2. Убедитесь, что ваш компьютер подключен к интернету (для загрузки шрифта и библиотек).
3. Запустите файл через браузер, открыв его локально.

### Запуск

1. Откройте файл `index.html` в браузере.
2. Используйте элементы управления для изменения параметров объекта и изучения его проекций.

---

## Требования к техническим характеристикам

- **Процессор**: любой современный процессор.
- **Оперативная память**: минимум 2 ГБ.
- **Графический процессор**: поддержка WebGL.
- **Операционная система**: Windows, macOS, Linux.
- **Браузер**: Google Chrome 60+, Mozilla Firefox 54+, Safari 11+.

---

## Обработка ошибок

- Если шрифт не загружен, объект не будет построен. В этом случае проверьте подключение к интернету.
- При некорректной работе графики убедитесь, что ваш браузер поддерживает WebGL.

---

## Дополнительные сведения

### Масштабирование

- Масштабирование объекта осуществляется изменением параметра `scale` в объекте `transformParams`.
- Значения масштаба варьируются от 0.1 до 3.

### Ортографические проекции

- Камеры для проекций устанавливаются в фиксированные позиции:
  - **Oxy**: камера смотрит вдоль оси Z.
  - **Oxz**: камера смотрит вдоль оси Y.
  - **Oyz**: камера смотрит вдоль оси X.

### Вращение

- Углы вращения задаются в радианах (диапазон от 0 до 2π).

---

## Сопровождение и развитие

- Для добавления новых трехмерных объектов можно использовать `THREE.TextGeometry` или другие классы геометрии из библиотеки Three.js.
- Для расширения функционала можно реализовать перспективные проекции или добавить дополнительные преобразования (например, отражение).

---

## Заключение

Программа **PKG_LAB6** является универсальным инструментом для изучения трехмерной графики. Она позволяет построить каркасную модель объекта, выполнить трехмерные преобразования и визуализировать ортографические проекции. Простота интерфейса и использование современных технологий делают приложение удобным в использовании и расширении.
