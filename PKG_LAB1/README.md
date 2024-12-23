# Документация разработчика

## Текст программы

### Наименование программы

**PKG_LAB1** — приложение для исследования цветовых моделей и переходов между ними на языке C++ с использованием библиотеки Qt.

### Область применения

Программа предназначена для изучения цветовых моделей RGB, CMYK, HSV, HLS, XYZ, LAB и их взаимных преобразований. Она может быть использована в учебных целях, а также для демонстрации работы с цветами и их составляющими.

### Назначение программы

- Реализация и визуализация следующих возможностей:
  - Отображение цвета в трех заданных цветовых моделях одновременно.
  - Поддержка преобразований между указанными моделями (например, RGB ↔ CMYK ↔ HLS).
  - Изменение цвета через ввод значений, выбор из палитры или ползунки.
  - Автоматический пересчет всех связанных цветовых моделей при изменении одного из параметров.
  - Обработка некорректных значений (например, при выходе за границы диапазона).
- Интерактивный и удобный пользовательский интерфейс для работы с цветами.

### Функциональные возможности

- Отображение цвета в трех выбранных цветовых моделях.
- Три способа задания цвета:
  - Поля ввода для точного задания значений.
  - Выбор из палитры (аналогично графическим редакторам).
  - Плавное изменение цвета через ползунки.
- Автоматическое отображение изменений во всех связанных моделях при изменении одного из параметров.
- Уведомления о некорректных значениях (например, округление при выходе за диапазон).
- Поддержка переключения между различными комбинациями цветовых моделей (в зависимости от варианта).
- Отображение цветового графика МКО (график цветового охвата).

## Описание программы

### Структура программы

- **PKG_LAB1**: основной класс приложения, наследующийся от `QMainWindow`.
  - **Методы инициализации**:
    - `setupUI`: настройка всех элементов интерфейса приложения.
    - `setupConnections`: подключение сигналов и слотов для обработки пользовательских действий.
  - **Основной функционал**:
    - `updateColor`: пересчет цвета во всех выбранных моделях при изменении одного из параметров. 
    - `convertToModel`: методы для преобразования между цветовыми моделями.
    - `validateInput`: проверка корректности введенных значений и обработка выхода за пределы.
  - **Отображение графика МКО**:
    - `renderColorGraph`: отображение цветового графика в отдельном окне.
  - **Интерфейсные элементы**:
    - Поля ввода для точных значений.
    - Ползунки для плавного изменения.
    - Кнопка для выбора цвета из палитры.
    - Отображение текущего цвета и его компонентов.
    
### Используемые библиотеки и модули

- **Qt**: для создания графического интерфейса и обработки событий.
- **cmath**: для математических вычислений (например, преобразование цветовых координат).
- **std::vector**: для хранения данных о цветах.
- **QColor**: встроенный класс Qt для работы с цветами.

### Логические структуры данных

- **Классы и переменные**:
  - `ColorModel`: структура для хранения значений компонентов цвета в одной модели.
  - `currentColor`: текущий цвет в выбранной базовой модели.
  - `scale`: масштаб для отображения цветового графика.
- **Виджеты интерфейса**:
  - Поля ввода (`QLineEdit`) для задания значений.
  - Ползунки (`QSlider`) для плавного изменения параметров.
  - Кнопка выбора цвета (`QPushButton`).
  - Графическое окно (`QGraphicsView`) для отображения графика МКО.
  
### Взаимодействие с пользователем

- Пользователь выбирает одну из комбинаций цветовых моделей (например, RGB ↔ CMYK ↔ HSV).
- Вводит значения цвета через:
  - Поля ввода для точных значений.
  - Ползунки для плавных изменений.
  - Палитру для выбора цвета.
- Программа автоматически пересчитывает значения во всех связанных моделях.
- При некорректных значениях программа уведомляет пользователя и выполняет округление/обрезание значений.
- Цвет отображается в графическом окне, а также в цифровом виде (значения компонентов).

## Инструкция по установке и запуску

### Требования к системе

- **Qt Framework** версии 5.15 и выше.
- Операционная система Windows, macOS или Linux.
- **C++ компилятор**: GCC, Clang или MSVC с поддержкой C++17.

### Установка

1. **Убедитесь, что установлен Qt**:

   Скачайте и установите Qt Framework с официального сайта: [https://www.qt.io/download](https://www.qt.io/download).

2. **Склонируйте репозиторий**:

   ```bash
   git clone https://github.com/your-repository/PKG_LAB1.git
   ```

3. **Соберите проект**:

   Откройте проект в Qt Creator и выполните сборку, либо используйте командную строку:

   ```bash
   cd PKG_LAB1
   qmake
   make
   ```

### Запуск программы

1. Выполните скомпилированный файл:

   ```bash
   ./PKG_LAB1
   ```

2. Для Windows используйте исполняемый файл `.exe`.

## Инструкция пользователя

1. **Выберите комбинацию цветовых моделей** в выпадающем списке.
2. **Задайте цвет**:
   - Используйте поля ввода для точного задания значений.
   - Перемещайте ползунки для плавного изменения цвета.
   - Нажмите на кнопку палитры для выбора цвета.
3. Программа отобразит цвет в трех связанных моделях.
4. При изменении любого параметра остальные модели пересчитаются автоматически.
5. Для отображения цветового графика нажмите кнопку "Показать график МКО".

## Требования к техническим характеристикам

- **Процессор**: с тактовой частотой не менее 1 ГГц.
- **Оперативная память**: не менее 512 МБ.
- **Дисплей**: с разрешением не менее 1024x768 пикселей.

## Обработка ошибок

- При вводе некорректных значений выводится предупреждение.
- Если рассчитанные значения выходят за пределы допустимого диапазона, они автоматически округляются или обрезаются.
- В консоли отображаются сообщения об ошибках для отладки.

## Дополнительные сведения

### Цветовой график

- График отображается в отдельном окне и показывает цветовой охват для выбранной модели.

### Преобразования моделей

- Реализованы функции для преобразования между всеми указанными моделями:
  - RGB ↔ CMYK ↔ HSV
  - RGB ↔ XYZ ↔ LAB
  - CMYK ↔ HLS ↔ LAB
- Преобразования выполняются с использованием математических формул и методов из стандарта CIE.

## Сопровождение и развитие

- Код структурирован и снабжен комментариями для упрощения сопровождения.
- Для добавления новых моделей можно расширять класс `PKG_LAB1`, добавляя соответствующие методы пересчета и элементы управления.

## Ссылки на используемые стандарты

- **ГОСТ 19.101-77** — Виды программ и программных документов.
- **ГОСТ 19.402-78** — Описание программы.
- **ГОСТ 19.505-79** — Руководство оператора.

## Заключение

Программа предоставляет интерактивный инструмент для изучения и визуализации цветовых моделей. Она соответствует стандартам и требованиям, что облегчает её использование, сопровождение и развитие.
