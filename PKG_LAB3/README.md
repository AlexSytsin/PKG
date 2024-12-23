# Документация разработчика

## Текст программы

### Наименование программы

**PKG_LAB3** — приложение для реализации методов обработки цифровых изображений, написанное на языке C++ с использованием библиотеки OpenCV и Qt.

### Область применения

Программа предназначена для обработки цифровых изображений с использованием линейных и нелинейных методов. Она может применяться для анализа изображений, улучшения их качества и выполнения операций сегментации.

### Назначение программы

- Реализация следующих возможностей:
  - Реализация указанных методов обработки изображений согласно варианту:
    - Поэлементные операции и линейное контрастирование.
    - Низкочастотные фильтры (сглаживающие).
    - Высокочастотные фильтры (увеличение резкости).
    - Сегментация изображений: обнаружение точек, линий и перепадов яркости.
    - Нелинейные фильтры, основанные на порядковых статистиках.
    - Построение и эквализация гистограммы изображения.
    - Глобальная и адаптивная пороговая обработка.
    - Морфологическая обработка.
  - Подбор и тестирование изображений (зашумленных, размытых, малоконтрастных).
  - Сравнение эффективности методов на выбранных изображениях.
  - Интерфейс для выбора методов и параметров обработки.

### Функциональные возможности

- Загрузка изображений для обработки (поддержка популярных форматов: JPG, PNG, BMP, TIFF).
- Реализация указанных методов обработки изображений:
  - **Поэлементные операции**: изменение яркости, контрастности.
  - **Линейное контрастирование**: растяжение диапазона яркости.
  - **Низкочастотные фильтры**: сглаживание (усредняющий, гауссовский фильтр).
  - **Высокочастотные фильтры**: повышение резкости (лапласиан, фильтр Собеля).
  - **Сегментация**: обнаружение границ, линий, точек (Канни, Хафа).
  - **Нелинейные фильтры**: медианный, минимум/максимум фильтр.
  - **Глобальная/локальная пороговая обработка**: пороговые преобразования.
  - **Адаптивная пороговая обработка**: метод, основанный на локальном анализе.
  - **Морфологическая обработка**: эрозия, дилатация, открытие, закрытие.
  - **Эквализация гистограммы**: выравнивание яркости.
- Выбор параметров для обработки (размер ядра, тип порога, структурирующий элемент и т.д.).
- Отображение результата обработки в графическом интерфейсе.
- Сравнение исходного и обработанного изображения.

## Описание программы

### Структура программы

- **PKG_LAB3**: основной класс приложения, наследующийся от `QMainWindow`.
  - **Методы инициализации**:
    - `setupUI`: настройка всех элементов интерфейса.
    - `setupConnections`: подключение сигналов и слотов.
  - **Методы обработки изображений**:
    - `applyLinearContrast`: реализация линейного контрастирования.
    - `applyEqualization`: реализация эквализации гистограммы.
    - `applyLowPassFilter`: реализация сглаживающих фильтров.
    - `applyHighPassFilter`: реализация фильтров повышения резкости.
    - `applyThresholding`: реализация пороговой обработки.
    - `applyAdaptiveThreshold`: реализация адаптивной пороговой обработки.
    - `applyMorphologicalOperations`: реализация морфологической обработки.
  - **Графический интерфейс**:
    - Загрузка изображений.
    - Выбор метода обработки.
    - Отображение исходного и обработанного изображения.
    - Настройка параметров для методов обработки.

### Используемые библиотеки и модули

- **Qt**: для создания графического интерфейса.
- **OpenCV**: для реализации алгоритмов обработки изображений.
- **cmath**: для математических операций.
- **QImage**: для отображения изображений в интерфейсе.

### Логические структуры данных

- **Классы и переменные**:
  - `ImageProcessor`: класс для реализации методов обработки изображений.
  - `currentImage`: текущее изображение, загруженное для обработки.
  - `processedImage`: результат обработки изображения.
- **Параметры обработки**:
  - Размер ядра для фильтров.
  - Тип порога для пороговой обработки.
  - Тип структурирующего элемента для морфологических операций.
- **Виджеты интерфейса**:
  - Поля выбора метода обработки.
  - Поля ввода параметров.
  - Кнопка загрузки изображения.
  - Кнопка сохранения обработанного изображения.

### Взаимодействие с пользователем

1. Пользователь загружает изображение через кнопку "Загрузить".
2. Выбирает метод обработки из списка.
3. Настраивает параметры обработки (размер ядра, порог, тип структурирующего элемента и т.д.).
4. Нажимает кнопку "Обработать".
5. Программа отображает результат обработки рядом с исходным изображением.
6. Пользователь может сохранить обработанное изображение.

## Инструкция по установке и запуску

### Требования к системе

- **Qt Framework** версии 5.15 и выше.
- **OpenCV** версии 4.5 и выше.
- Операционная система Windows, macOS или Linux.
- **C++ компилятор**: GCC, Clang или MSVC с поддержкой C++17.

### Установка

1. **Убедитесь, что установлены Qt и OpenCV**:

   Установите Qt Framework с официального сайта: [https://www.qt.io/download](https://www.qt.io/download).

   Для установки OpenCV используйте менеджер пакетов:
   - **Ubuntu/Debian**:
     ```bash
     sudo apt-get install libopencv-dev
     ```
   - **Windows**: скачайте и установите OpenCV вручную или через vcpkg.

2. **Склонируйте репозиторий**:

   ```bash
   git clone https://github.com/your-repository/PKG_LAB3.git
   ```

3. **Соберите проект**:

   Откройте проект в Qt Creator и выполните сборку, либо используйте командную строку:

   ```bash
   cd PKG_LAB3
   qmake
   make
   ```

### Запуск программы

1. Выполните скомпилированный файл:

   ```bash
   ./PKG_LAB3
   ```

2. Для Windows используйте исполняемый файл `.exe`.

## Инструкция пользователя

1. Нажмите кнопку "Загрузить", чтобы выбрать изображение.
2. Выберите метод обработки из выпадающего списка.
3. Настройте параметры обработки (при необходимости).
4. Нажмите кнопку "Обработать", чтобы применить выбранный метод.
5. Ознакомьтесь с результатом обработки, отображенным рядом с исходным изображением.
6. Сохраните обработанное изображение, нажав кнопку "Сохранить".

## Требования к техническим характеристикам

- **Процессор**: с тактовой частотой не менее 1 ГГц.
- **Оперативная память**: не менее 1 ГБ.
- **Дисплей**: с разрешением не менее 1024x768 пикселей.
- **Свободное место на диске**: около 500 МБ.

## Обработка ошибок

- Если файл поврежден или не поддерживается, выводится сообщение об ошибке.
- При некорректных параметрах обработки программа уведомляет пользователя.
- В консоли отображаются сообщения об ошибках для отладки.

## Дополнительные сведения

### Методы обработки

- **Линейное контрастирование**: растягивание диапазона яркости для повышения контраста.
- **Сглаживающие фильтры**: гауссовский и усредняющий фильтры для удаления шума.
- **Резкость**: применение фильтров Собеля, Лапласа для выделения границ.
- **Эквализация гистограммы**: выравнивание яркости для улучшения контраста.
- **Пороговая обработка**: глобальные и локальные пороги для сегментации.
- **Морфологическая обработка**: эрозия, дилатация, открытие, закрытие.

## Сопровождение и развитие

- Код программы хорошо структурирован и снабжен комментариями.
- Для добавления новых методов обработки можно расширять класс `ImageProcessor`.

## Ссылки на используемые стандарты

- **ГОСТ 19.101-77** — Виды программ и программных документов.
- **ГОСТ 19.402-78** — Описание программы.
- **ГОСТ 19.505-79** — Руководство оператора.

## Заключение

Программа **PKG_LAB3** предоставляет удобный инструмент для обработки изображений с использованием различных методов. Она поддерживает популярные форматы, имеет удобный интерфейс и может быть использована как для учебных, так и для практических целей.
