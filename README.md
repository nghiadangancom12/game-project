# Sweet Hero
# 23020125 Nguyễn Đỗ Trọng Nghĩa

## Hướng dẫn cài đặt 
Lưu ý: Cách cài đặt này được thực hiện trên vscode, máy 64bit
1. Clone repository này xuống máy tính 
2. Trong file Makefile các bạn chú ý tùy chỉnh đường dẫn đến 'SDL2-2.0.20\x86_64-w64-mingw32\include' và 'SDL2-2.0.20\x86_64-w64-mingw32\lib' tùy theo đường dẫn ở máy bạn
3. Đặt environment path của máy bạn đến mingw64/bin
4. Sau khi xong hết, để chạy chương trình các bạn gõ vào terminal trong vscode 'mingw32-make'
5. Chạy file main.exe

## Mô tả về trò chơi
Trò chơi được lấy cảm hứng bởi thể loại bắn súng, phiêu lưu. Ý tưởng chính là bạn được đặt vào một cốt truyện, trong cốt truyện đó bạn phải tiêu diệt quái vật, các mối hiểm họa để có thể tìm được phần thưởng ở cuối bản đồ. Khi hoàn thành bản đồ này thì sẽ được chuyển đến bản đồ khác.

## Các chức năng đã cài đặt
1. Menu đơn giản cho trò chơi
2. Xây dựng map gồm nhiều thành phần địa hình, vật trang trí
3. Cuốn chiếu map theo nhân vật di chuyển và xây dựng tương tác giữa nhân vật và map
4. Tạo ra hiệu ứng cho nhân vật di chuyển trái, phải, nhảy lên bằng ảnh nhiều frame
5. Tạo ra 2 loại quái vật: đứng im và chuyển động
6. Xây dựng va chạm giữa nhân vật và quái, đạn với nhân vật, đạn với quái
7. Sử dụng font để hiển thị tiền, điểm đạt được, thời gian, ...
8. Tạo hiệu ứng âm thanh cho trò chơi: âm nền, âm thanh đạn bắn, âm thanh nhảy, âm thanh ăn tiền, âm thanh của boss, ...
 

## Các kỹ thuật lập trình được sử dụng
1. Mảng, vector
2. Con trỏ
3. Lớp, hướng đối tượng
4. Đồ họa (SDL2, SDL2_image)
5. Âm thanh (SDL2_mixer)
6. Đọc file và lưu trữ
7. Màn hình console (window.h)

## Kết luận
Đây là dòng game luôn luôn có thể phát triển theo hướng tuyến tính. Một vài hướng phát triển tiếp theo: xây dựng thêm map để tăng trải nghiệm, thêm cốt truyện cho nhân vật, bổ sung các nhân vật khác vào, cho chơi chế độ 2 người, ...

Em kì vọng dự án ày được 7 
### Những điều tâm đắc của em sau khi hoàn thành chương trình
-> Trải nghiệm quy trình phát triển sản phẩm thu nhỏ
-> Rèn luyện kĩ năng lập trình hướng đối 
-> Giúp em rèn thêm tính kiên nhẫn khi có bug
-> Em sẽ thông cảm cho nhà phát hành hơn khi gặp lỗi trong trò chơi điện tử
