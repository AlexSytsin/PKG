# Документация разработчика

## Текст программы

### Наименование программы

**PKG_LAB5** — приложение для демонстрации алгоритмов отсечения отрезков и многоугольников, разработанное с использованием C++ и библиотеки Qt.

---

### Область применения

Программа предназначена для изучения, визуализации и анализа алгоритмов отсечения отрезков и многоугольников. Она может быть использована в учебных целях для закрепления теоретических знаний и демонстрации работы алгоритмов на практике.

---

### Назначение программы

- Реализация и визуализация следующих алгоритмов отсечения:
  - Алгоритм Сазерленда-Коэна (Sutherland-Cohen)
  - Алгоритм Лианга-Барски (Liang-Barsky)
  - Алгоритм средней точки (Midpoint Subdivision)
  - Алгоритм отсечения отрезков выпуклым многоугольником
  - Алгоритм отсечения выпуклого многоугольника
- Предоставление графического интерфейса пользователя (GUI) для взаимодействия с алгоритмами.
- Возможность загрузки данных из файла, изменения масштаба, очистки холста и измерения времени выполнения каждого алгоритма.

---

### Функциональные возможности

- Выбор алгоритма для отсечения из предоставленного списка.
- Ввод координат отрезков и отсекателя (прямоугольного окна) вручную или загрузка из файла.
- Визуализация исходных данных:
  - Отсекающее окно отображается одним цветом.
  - Исходные отрезки или многоугольники отображаются другим цветом.
- Выполнение отсечения выбранным алгоритмом с отображением видимых частей отрезков или многоугольников.
- Отрисовка координатной системы с возможностью масштабирования.
- Отображение времени выполнения выбранного алгоритма.
- Сохранение результата в файл в формате PNG/JPG.

---

## Описание программы

### Структура программы

- **PKG_LAB5**: основной класс приложения, унаследованный от `QMainWindow`.
  - **Основные компоненты**:
    - **Главное окно**:
      - Меню с возможностью загрузки данных из файла, выбора алгоритма, сохранения изображения и выхода.
      - Холст для рисования (`QGraphicsView` с `QGraphicsScene`).
      - Панель инструментов для управления масштабом, очисткой и выбора алгоритма.
    - **Диалоговые окна**:
      - Поля для ввода координат отрезков и прямоугольного окна.
      - Загрузка входных данных из текстового файла.
      - Отображение времени выполнения алгоритмов.
  - **Методы обработки событий**:
    - `loadFromFile`: загрузка данных из текстового файла.
    - `drawClippingWindow`: отрисовка прямоугольного окна для отсечения.
    - `drawSegments`: отрисовка исходных отрезков.
    - `clipSegments`: выполнение отсечения выбранным алгоритмом.
    - `clearCanvas`: очистка холста.
    - `zoomIn` и `zoomOut`: увеличение и уменьшение масштаба.
    - `exportToImage`: сохранение текущего состояния холста в файл.
- **Алгоритмы отсечения**:
  - Реализованы в виде отдельных методов класса:
    - `sutherlandCohen`: реализация алгоритма Сазерленда-Коэна.
    - `liangBarsky`: реализация алгоритма Лианга-Барски.
    - `midpointSubdivision`: реализация алгоритма средней точки.
    - `clipWithConvexPolygon`: отсечение отрезков выпуклым многоугольником.
    - `clipConvexPolygon`: отсечение выпуклого многоугольника.
  - Каждый метод измеряет время выполнения с использованием `QElapsedTimer`.
  - Методы работают с координатами, загруженными из файла или введенными вручную.
- **Вспомогательные функции**:
  - `drawPixel`: отрисовка отдельного пикселя с учетом масштаба.
  - `drawGrid`: отрисовка координатной сетки.
  - `toSceneCoordinates`: преобразование логических координат в координаты сцены.
  - `isInsideWindow`: проверка, находится ли точка внутри отсекателя.
  - `intersect`: вычисление точки пересечения отрезка с границей отсекателя.

---

### Используемые библиотеки и модули

- **Qt Widgets**: для создания графического интерфейса.
- **Qt Core**: для обработки событий и измерения времени выполнения.
- **Qt GUI**: для работы с графикой.
- **QElapsedTimer**: для измерения времени выполнения алгоритмов.
- **QFile** и **QTextStream**: для работы с файлами.

---

### Логические структуры данных

- **Переменные класса**:
  - `segments`: список отрезков, представленных парой координат.
  - `clippingWindow`: координаты прямоугольного окна отсечения.
  - `algorithm`: текущий выбранный алгоритм.
  - `scene`: объект `QGraphicsScene` для рисования графики.
  - `scale`: текущий масштаб отображения (по умолчанию 1).
- **Графические элементы**:
  - Исходные отрезки, отсекающее окно и видимые части отрезков.
- **Формат входного файла**:
  - Первая строка: количество отрезков (`n`).
  - Следующие `n` строк: координаты отрезков (`X1 Y1 X2 Y2`).
  - Последняя строка: координаты отсекателя (`Xmin Ymin Xmax Ymax`).

---

### Взаимодействие с пользователем

1. Пользователь загружает данные из файла или вводит их вручную.
2. Выбирает алгоритм отсечения из выпадающего списка.
3. Нажимает кнопку «Отсечь», чтобы выполнить выбранный алгоритм.
4. Визуализирует результат на холсте:
   - Исходные отрезки отображаются одним цветом.
   - Видимые части отрезков отображаются другим цветом.
5. Использует кнопки масштабирования для изменения масштаба сетки.
6. Нажимает кнопку «Очистить», чтобы стереть все элементы.
7. Сохраняет результат в файл через меню «Сохранить как».

---

## Инструкция по установке и запуску

### Требования к системе

- **Операционная система**: Windows XP и выше.
- **Компилятор**: GCC, MSVC или любой другой совместимый с Qt.
- **Qt Framework**: версия 5.15 и выше.

---

### Установка

1. Установите Qt Framework, если он не установлен:
   - Загрузите с [официального сайта Qt](https://www.qt.io/).
   - Убедитесь, что установлены модули `Qt Widgets`, `Qt Core`, `Qt GUI`.

2. Скачайте исходный код программы и откройте проект в Qt Creator.

3. Соберите проект:
   - Выберите сборку `Release` для оптимизированной версии.
   - Нажмите "Собрать" или выполните команду:

     ```bash
     qmake && make
     ```

4. Скопируйте скомпилированный `.exe` файл в любую удобную папку.

---

### Запуск программы

1. Запустите собранный `.exe` файл.
2. Для запуска из командной строки выполните:

   ```bash
   ./PKG_LAB5.exe
   ```

---

## Инструкция пользователя

1. Загрузите данные из текстового файла или введите их вручную:
   - Формат файла:
     ```
     n
     X1 Y1 X2 Y2
     ...
     Xmin Ymin Xmax Ymax
     ```

2. Выберите алгоритм отсечения из выпадающего списка.
3. Нажмите кнопку «Отсечь», чтобы выполнить выбранный алгоритм.
4. Используйте кнопки «Увеличить» и «Уменьшить» для изменения масштаба сетки.
5. Нажмите кнопку «Очистить», чтобы стереть все элементы.
6. Сохраните текущий результат в файл через меню «Сохранить как».

---

## Требования к техническим характеристикам

- **Процессор**: с тактовой частотой не менее 1 ГГц.
- **Оперативная память**: не менее 512 МБ.
- **Дисплей**: с разрешением не менее 1024x768 пикселей.

---

## Обработка ошибок

- Программа обрабатывает некорректные вводы координат и параметров. При неверных данных выводится сообщение об ошибке.
- Исключения, возникающие при загрузке данных из файла, также обрабатываются и отображаются в виде сообщений.

---

## Дополнительные сведения

### Масштабирование

- Масштаб регулируется переменной `scale`, которая изменяется с использованием кнопок «Увеличить» и «Уменьшить».
- При изменении масштаба сетка и все элементы перерисовываются с учетом новой шкалы.

### Время выполнения

- Для измерения времени выполнения используется класс `QElapsedTimer`.
- Результат отображается в миллисекундах и позволяет сравнить эффективность алгоритмов.

---

## Сопровождение и развитие

- Код программы структурирован и снабжен комментариями, что упрощает его модификацию.
- Для добавления новых алгоритмов отсечения можно дополнять методы класса и расширять интерфейс программы.

---

## Ссылки на используемые стандарты

- **ГОСТ 19.101-77** — Виды программ и программных документов.
- **ГОСТ 19.402-78** — Описание программы.
- **ГОСТ 19.505-79** — Руководство оператора.

---

## Заключение

Программа **PKG_LAB5** предоставляет удобный инструмент для изучения и визуализации алгоритмов отсечения отрезков и многоугольников. Ее структура и интерфейс соответствуют требованиям, что обеспечивает возможность дальнейшего сопровождения и развития проекта.
